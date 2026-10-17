# The Goo Programming Language

Goo is a dynamic, type-based, object-oriented programming language in the
Lisp family, created by Jonathan Bachrach at the MIT AI Lab / CSAIL. It is
meant to be simple, productive, powerful, extensible, dynamic, efficient,
and real-time. In its author's words, it attempts to be "a simpler
lisp-syntaxed Dylan, an object-oriented Scheme, and a lispified Cecil."

Key characteristics:

- **Everything is an object**, and functions are generic: methods dispatch
  on the types of all their arguments (multimethods), as in Dylan and CLOS.
- **Always compiled, never interpreted.** Goo is written in Goo and
  compiles to C — including expressions typed at the interactive listener,
  which are compiled to C, built into a shared library, and loaded on the
  fly.
- **Lightweight C FFI.** C statements and expressions can be embedded
  directly in Goo source with `#{ ... }` literals, and modules can declare
  C include directories and libraries with `use/include` and `use/library`.
- **Modules, hygienic-ish macros (`ds`/`dss`), conditions and restarts,
  threads, bignums** (via GMP), and a self-hosting compiler.

## A taste

```lisp
(use goo)

(dc <account> (<any>))                     ;; define class
  (dp balance (<account> => <int>) 0)      ;; define property

(dc <checking-account> (<account>))
(dc <savings-account>  (<account>))

(dv *monthly-interest* 0.02)

(dm credit (account|<account> amount|<int>)   ;; define method
  (opf (balance account) (+ _ amount)))

;; all accounts earn interest ...
(dm earn-interest (account|<account>)
  (credit account (floor (* (balance account) *monthly-interest*))))

;; ... but checking accounts don't
(dm earn-interest (account|<checking-account>)
  #f)

(do earn-interest (accounts customer))
```

## Building and running

See [BUILD.md](BUILD.md) for full instructions. The short version:

```sh
autoconf
./configure
make
make install
goo            # starts the listener; ,quit exits
```

Requires a C compiler (also at runtime, for the dynamic compiler), the
Boehm garbage collector (`libgc`), and GMP. The system builds and runs on
modern 64-bit Linux.

Because Goo is self-hosting, the repository carries the compiler's own C
output under `c/g2c/` as the bootstrap; BUILD.md describes the
regeneration cycle (`(use eval/g2c)` then `(g2c-top)`).

## Documentation

- `doc/goo.pdf` — the manual (also `doc/doc.txt` in plain text, which
  partly uses the language's earlier name, "Proto")
- `doc/LISTENER.TXT` — listener and debugger basics
- `doc/goo-intro.pdf`, `doc/goo-boot.pdf`, `doc/goo-imp.pdf`,
  `doc/goo-at-harvard.pdf` — papers and talks on the design, the
  bootstrap, and the implementation
- `emacs/` — Emacs editing modes (`goo.el`, `goo-font-lock.el`,
  `goo-shell.el`)

## Layout

| Directory | Contents |
|---|---|
| `src/goo/` | core library: boot, classes, functions, macros, conditions, math, collections (`cols/`), I/O (`io/`) |
| `src/eval/` | the implementation: reader/syntax, AST, module system, optimizer, the Goo→C compiler (`g2c.goo`), the top level |
| `src/time/` | threads, locks, events |
| `src/tests/` | test suites — `(use tests)` then `(run-all-tests)` |
| `c/` | hand-written C runtime (`grt.c`, `grt.h`) and the checked-in bootstrap C under `c/g2c/` |
| `doc/` | manual and papers |
| `src/demos/`, `src/extras/`, `src/interpreters/`, … | demos and experiments |

## History and status

Goo (earlier called Proto) was developed by Jonathan Bachrach around
1999–2003; the last upstream version is 0.155 (November 2003). This
repository continues from that code base, updated to build and run
cleanly on modern 64-bit systems and toolchains, with ongoing work such
as the lightweight C FFI.

## License

GNU General Public License, version 2. See [TERMS](TERMS).
