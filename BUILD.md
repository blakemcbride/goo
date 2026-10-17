# Building and Running Goo

## Prerequisites

- A C compiler (gcc)
- autoconf (the `configure` script is not checked in)
- Boehm GC — either an installed `libgc`, or the GC sources untarred into `gc/` at the repo root (configure checks for `gc/Makefile` and will build it)
- GMP (`libgmp`, used for bignums)
- A C compiler is also required at **runtime**: the REPL evaluates by compiling each expression to C, building a `.so`, and dlopening it.

## Build

```sh
autoconf
./configure            # optional: --with-threads[=DIR] for pthread support
make
```

This compiles the C runtime (`c/grt.c`) and the checked-in generated C under `c/g2c/`, producing the executable `c/g2c/g2c`.

## Install

```sh
make install
```

Installs the binary as `<prefix>/bin/goo`, the runtime headers under `<prefix>/lib/goo/lib/`, and all `.goo` sources from `src/` as modules under `<prefix>/lib/goo/mods/`. The install libdir is compiled in as the default `GOO_ROOT`.

## Run

```sh
goo
```

starts the read-eval-print loop (listener). Basics:

- `,quit` exits (listener commands start with a comma: `,quit`, `,up`, `,top`, `,restart N`).
- `(use <module>)` loads a module, e.g. `(use tests)`.
- `(load "file.goo")` loads a source file.
- On startup it loads optional patch files named `init.goo` from `$GOO_ROOT` and `~/.goo`.
- See `doc/LISTENER.TXT` for debugger and module-switching commands (written in the old "Proto" naming).

Environment variables:

- `GOO_ROOT` — overrides the compiled-in root. Modules are searched in `$GOO_ROOT/mods`, `$GOO_ROOT/local/mods`, and `~/.goo/mods`.
- `GOO_BUILD_ROOT` — root the compiler uses to read `src/` and write generated C into `c/<app>/` (defaults to the current directory).

### Running from the source tree (uninstalled)

Module lookup expects `$GOO_ROOT/mods/<module>.goo` and dynamic compilation
expects headers in `$GOO_ROOT/lib`; two symlinks map both onto the source tree:

```sh
ln -s src mods          # once, at the repo root
ln -s c   lib           # once, at the repo root
GOO_ROOT=$PWD GOO_BUILD_ROOT=$PWD c/g2c/g2c
```

## Rebuilding after changing `.goo` sources

The system is self-hosting: the checked-in C in `c/g2c/` is the compiler's own output, and editing `.goo` files does **not** change the binary until that C is regenerated. From the repo root:

```sh
GOO_BUILD_ROOT=$PWD goo        # or c/g2c/g2c as above
```

then at the listener:

```
(use eval/g2c)
(g2c-top)
```

This rewrites `c/g2c/*.c` and `c/g2c/Makefile`. Then rebuild:

```sh
make
```

Repeat the cycle with the new binary if the change affects the compiler itself (fixpoint bootstrap).

## Tests

At the listener:

```
(use tests)
(run-all-tests)
```

Individual groups (defined with `test-group` in `src/tests/`) run via `(run-tests 'name)`.

`run-all-tests` returns the number of warnings/errors. The current known baseline
is 4 (a `<seq!>` fill warning, missing `del`/`len-setter` methods, unbound `ins!`).
