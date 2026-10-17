# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this is

Goo — a dynamic, type-based, object-oriented Lisp-family language by Jonathan Bachrach (MIT), originally called Proto. The system is self-hosting: the compiler and nearly all of the runtime library are written in Goo itself (`.goo` files), compiled to C.

## Build

The `configure` script is not checked in — generate it first:

```sh
autoconf          # uses configure.in + aclocal.m4
./configure       # optional: --with-threads
make              # builds the executable c/g2c/g2c
make install      # installs it as `goo`, plus src/**/*.goo as modules under <prefix>/lib/goo/mods
```

See BUILD.md for running uninstalled from the source tree (needs `mods -> src` and
`lib -> c` symlinks), the bootstrap-regeneration cycle, and the listener basics
(`,quit` exits; listener commands start with a comma).

**64-bit portability:** the g2c code generator emits cross-module calls to runtime
primitives without C declarations; `c/grt-protos.h` (included by `grt.h`) declares
them all so implicit-int returns don't truncate 64-bit heap pointers. If a new
primitive is added, add its prototype there, or the build gets
implicit-declaration warnings and the binary corrupts pointers at runtime.

Requirements: a C compiler, Boehm GC (system `libgc`, or GC sources untarred into `gc/` at the repo root), and GMP (`-lgmp`, for bignums). A C compiler must also be present at *runtime* — see "Eval is compilation" below.

`make` descends into `c/`, which compiles the runtime `c/grt.c` and the checked-in generated C under `c/g2c/`, linking the single executable `c/g2c/g2c`. `src/` and `doc/` makefiles only install/clean; there is no separate compile step for `.goo` files.

Environment variables:
- `GOO_ROOT` — runtime root; module search path is `$GOO_ROOT/mods`, `$GOO_ROOT/local/mods`, `~/.goo/mods` (default compiled in from the install libdir).
- `GOO_BUILD_ROOT` — where the compiler reads `src/` and writes generated C into `c/<app>/` (defaults to `.`), i.e. set it to the repo root when regenerating the bootstrap.

## Tests

Run inside the `goo` REPL:

```
(use tests)
(run-all-tests)
```

Test groups live in `src/tests/` (driver, language, dependency); a single group defined with `test-group` runs via `(run-tests 'name)`. `run-all-tests` returns the warning/error count; the known baseline is 4.

## Architecture

### Self-hosting bootstrap

- `src/eval/` is the language implementation in Goo: AST (`ast.goo`), module system (`module.goo`), syntax/objectifier (`syntax.goo`), optimizer, top level/REPL (`top.goo`, `main.goo`), and the Goo→C compiler `g2c.goo`.
- The checked-in C under `c/g2c/` is the compiler's own output from compiling itself (app `g2c` = module `eval/main`). This is the bootstrap: changing `.goo` sources does **not** change the binary until the C is regenerated. To regenerate: run the existing `goo` binary with `GOO_BUILD_ROOT` set to the repo root and evaluate `(use eval/g2c)` then `(g2c-top)` — this rewrites `c/g2c/*.c` and `c/g2c/Makefile` — then `make` again. The regenerated C is committed as the new bootstrap.
- `c/grt.c` / `grt.h` is the hand-written C runtime (object representation, primitives, GC hooks).

### Eval is compilation

There is no interpreter. Every REPL expression goes through g2c: compiled to a C file in `/tmp`, built into a `.so` via the `%compile` primitive (which takes the module's accumulated include dirs and libraries), and dlopened via `%load`.

### Module system

Module name = path under `src/` (e.g. `goo/cols/vec` → `src/goo/cols/vec.goo`). `src/goo/` is the core library (boot, class/fun/macros, conditions, math, `cols/` collections, `io/` ports+reader+writer), `src/time/` threads/locks/events, `src/cols/` extra collections. A `.c` file whose name starts with `%` next to a `.goo` file (e.g. `src/goo/%math.c`) holds hand-written C primitives for that module and is compiled into the application.

### Lightweight CFFI (recent work)

`#{ ... }` reads as liberal string literals usable as C statements (`c-ment`) and expressions (`c-expr`); the reader support is in `src/goo/io/read.goo`, AST nodes in `src/eval/ast.goo`, emission in `src/eval/g2c.goo`, and the user-facing `goo/x` module (`src/goo/x.goo`) provides the `to-c` generic. `use/include` and `use/library` in a module declare C include directories and libraries that flow into `%compile` and the generated Makefile.

### Non-core directories

`src/demos`, `src/extras`, `src/interpreters`, `src/music`, `src/nest`, `src/samurui` are demos/experiments (excluded from releases by `release.bash`). `doc/` holds the manual (`goo.pdf`, `doc.txt` — note parts still use the old "Proto" names, e.g. `p2c-top` for `g2c-top`; `LISTENER.TXT` for REPL/debugger basics). `txt/` and `proposals/` are design notes. `emacs/` has the Goo editing modes.
