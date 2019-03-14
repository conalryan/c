# c

# [clang](https://clang.llvm.org/docs/CommandGuide/clang.html)

## OPTIONS

-E
Run the preprocessor stage.

-fsyntax-only
Run the preprocessor, parser and type checking stages.

-S
Run the previous stages as well as LLVM generation and optimization stages and target-specific code generation, producing an assembly file.
```c
clang -S some-file.c
# Produces some-file.s
```

-c
Run all of the above, plus the assembler, generating a target “.o” object file.
```c
clang -c some-file.c
# Produces some-file.o
```

-no stage selection option
If no stage selection option is specified, all stages above are run, and the linker is run to combine the results into an executable or shared library.
```c
clang some-file.c
# Produces a.out
```

-o <file>
Write output to file.
```c
clang some-file.c -o some-file
./some-file
```