# Domain-local `ignoreAlignmentAttrs`

`intOfAttrparam` sets the global `ignoreAlignmentAttrs` while evaluating an `aligned(...)` argument.
Goblint's parallel solvers call `alignOf_int` (via `constFold` → `bitsSizeOf`) from several domains while solving,
so the shared ref trips the assert at cil.ml:2368 or makes other domains ignore `aligned` attributes (wrong sizes).
Fix: make it a `Domain.DLS` key (`domain_shims` for OCaml 4).

Repro: `align40.c`, 40 threads, structs with `aligned(sizeof(...))`.
200 runs of goblint `--conf conf/svcomp26/parallel.json` (td_parallel_immediate, 4 domains):

| CIL                    | assert crash | "ignoring recursive align" warnings | same results as td3 |
|------------------------|--------------|-------------------------------------|---------------------|
| develop (59ed1d85)     | 196/200      | 200/200 runs                        | 4/200               |
| this commit            | 0/200        | 0/200                               | 200/200             |

Sequential td3 is unaffected.
