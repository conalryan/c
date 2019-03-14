# Influenced by C

# Header 
- #include <some_file.h>
- C++ is superset of C, has same #include <some_file.h> or #include "some_file.h"
- Java has import
- JavaScript has import
- Python has import
- go has import

# Preprocessor
- Preprocessor takes a C program and produces another C program.
- The produced program has no lines starting with #, all such lines are processed by the preprocessor.
- Preprocessor copies the preprocessed code of the .h to our file.
- Java compilation takes .java file and produces .class file.
- Preprocessors also support if-else directives which are typically used for conditional compilation.
  - Java no equivalent.
  - I suppose you could argue Angular uses this technique with *ngIf directives.

# Main Function
```int main(void) { /* ... */ }```
```int main(int argc, char *argv[]) { /* ... */ }```
- Execution typically begins with first line of main(). 
- The value returned by main indicates status of program termination.
- Variables are to be declared before any operation in the function.
- Java starts with public static void main(String[] args) {}
- JavaScript starts with the first line in the file.
- Python starts with the first line in the file.

# Return Statement
- The last part in any C program is the return statement. 
- Refers to the returning of the values from a function. 
- This return statement and return value depend upon the return-type of the function. 
- If the return type is void, then there will be no return statement.
- Java follows same pattern as above.

# Macros
- #define INCREMENT(x) ++x 
- Java no equivalent
- JavaScript by default will place var on global window scope.
- Python has global keyword allows function to modify globals variables.
- Standard C macros (__FILE__, __DATE__, __TIME__, __LINE__)
- Java has no equivalent.
- JavaScript uses __proto__
- Python has a number of __something__ attributes (__dict__, __doc__, __name__, __module__, __bases__)

