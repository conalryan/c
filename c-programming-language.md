# [c-programming-language](https://www.geeksforgeeks.org/c-programming-language/)

## Intro
- C is a middle level procedural programming language. 
- It was initially developed by Dennis Ritchie between 1969 and 1973 while working at AT&T Bell Labs in USA, as a system programming language to write operating system.
- The objective of its development was in the context of the re-design of the UNIX operating system to enable it to be used on multiple computers.
- Hence, many of the UNIX components including UNIX kernel itself were eventually rewritten in C.
- The main features of C language include low-level access to memory, simple set of keywords, and clean style.
- Suitable for **system programming** like **operating system** or **compiler development**.

## Influenced later languages
- C++ is nearly a superset of C language (There are few programs that may compile in C, but not in C++).
- Java
- PHP
- JavaScript

## Structure of C Program
- C program must be written in this structure, otherwise it will not compile.
![](StructureOfCprogram.png)

1. Header Files Inclusion: 
  - The first and foremost component is the inclusion of the Header files in a C program.
  - File with extension .h which contains C function declarations and macro definitions to be shared between several source files.
  - Some of C Header files:
    - stddef.h – Defines several useful types and macros.
    - stdint.h – Defines exact width integer types.
    - stdio.h – Defines core input and output functions
    - stdlib.h – Defines numeric conversion functions, pseudo-random network generator, memory allocation
    - string.h – Defines string handling functions
    - math.h – Defines common mathematical functions
  - Syntax to include a header file in C:
  ```c
  #include <header_file_name.h>
  ```
  - **preprocessor**:
    - All lines that start with # are processed by preprocessor which is a program invoked by the compiler. 
    - Preprocessor takes a C program and produces another C program. 
    - The produced program has no lines starting with #, all such lines are processed by the preprocessor.
    - Preprocessor copies the preprocessed code of the .h to our file.
    - **include directive**:
      - Contents of included header file (after preprocessing) are copied to the current file.
      - Angular brackets < and > instruct the preprocessor to look in the standard folder where all header files are held.
      - Double quotes “ and “ instruct the preprocessor to look into the current folder (current directory).
    - When we use define for a constant, the preprocessor produces a C program where the defined constant is searched and matching tokens are replaced with the given expression.
    ```c
    #include<stdio.h> 
    #define max 100 
    int main() 
    { 
      printf("max is %d", max); 
      return 0; 
    } 
    // Output: max is 100 
    // Note that the max inside "" is not replaced 
    ```
2. Main Method Declaration: 
  - Declare the main() function.
  - Syntax to Declare main method:
  ```c
  int main(void) { /* ... */ }
  ```
  - Execution typically begins with first line of main(). 
  - The void written in brackets indicates that the main doesn’t take any parameter. 
  - main() can be written to take parameters also.
  - int written before main indicates return type of main(). 
  - The value returned by main indicates status of program termination.
3. Variable Declaration: 
  - Variable declaration of the variables that are to be used in the function. 
  - No variable can be used without being declared.
  - Variables are to be declared before any operation in the function.
  ```c
  int main(void)
  {
    int a;
    // ...
  }
  ```
4. Body: 
   - Operations that are performed in the functions. It can be anything like manipulations, searching, sorting, printing, etc.
   ```c
   int main()
   {
      int a;
      printf("%d", a);
      // ...
    }
  ```
5. Return Statement: 
  - The last part in any C program is the return statement. 
  - Refers to the returning of the values from a function. 
  - This return statement and return value depend upon the return-type of the function. 
  - If the return type is void, then there will be no return statement. 
  - Return statement and the return value will be of the type of the specified return-type.

  ```c
  int main()
  {
    int a;
    printf("%d", a);
    return 0;
  }
  ```
  - The returned value may be used by operating system to know termination status of your program. 
  - The value 0 typically means successful termination.

## Macros
- The macros can take function like arguments, the arguments are not checked for data type. For example, the following macro INCREMENT(x) can be used for x of any data type.
```c
#include <stdio.h> 
#define INCREMENT(x) ++x 
int main() 
{ 
  char *ptr = "GeeksQuiz"; 
  int x = 10; 
  printf("%s  ", INCREMENT(ptr)); 
  printf("%d", INCREMENT(x)); 
  return 0; 
} 
// Output: eeksQuiz 11
```
- The macro arguments are not evaluated before macro expansion. For example consider the following program
```c
#include <stdio.h> 
#define MULTIPLY(a, b) a*b 
int main() 
{ 
  // The macro is expended as 2 + 3 * 3 + 5, not as 5*8 
  printf("%d", MULTIPLY(2+3, 3+5)); 
  return 0; 
} 
// Output: 16
```

```c
#include <stdio.h> 
//here, instead of writing a*a we write (a)*(b) 
#define MULTIPLY(a, b) (a)*(b) 
int main() 
{ 
  // The macro is expended as (2 + 3) * (3 + 5), as 5*8 
  printf("%d", MULTIPLY(2+3, 3+5)); 
  return 0; 
}
// Output: 40
```

- The tokens passed to macros can be concatenated using operator ## called Token-Pasting operator.
```c
#include <stdio.h> 
#define merge(a, b) a##b 
int main() 
{ 
  printf("%d ", merge(12, 34)); 
} 
// Output: 1234
```

- A token passed to macro can be converted to a string literal by using # before it.
```c
#include <stdio.h> 
#define get(a) #a 
int main() 
{ 
  // GeeksQuiz is changed to "GeeksQuiz" 
  printf("%s", get(GeeksQuiz)); 
} 
// Output: GeeksQuiz
```
- The macros can be written in multiple lines using ‘\’. The last line doesn’t need to have ‘\’.
```c
#include <stdio.h> 
#define PRINT(i, limit) while (i < limit) \ 
                        { \ 
                            printf("GeeksQuiz "); \ 
                            i++; \ 
                        } 
int main() 
{ 
  int i = 0; 
  PRINT(i, 3); 
  return 0; 
} 
// Output: GeeksQuiz  GeeksQuiz  GeeksQuiz 
```
- The macros with arguments should be avoided as they cause problems sometimes. And Inline functions should be preferred as there is type checking parameter evaluation in inline functions. From C99 onward, inline functions are supported by C language also.

```c
define square(x) x*x 
int main() 
{ 
  int x = 36/square(6); // Expanded as 36/6*6 
  printf("%d", x); 
  return 0; 
} 
// Output: 36 
```
- If we use inline functions, we get the expected output.
```c
inline int square(int x) { return x*x; } 
int main() 
{ 
  int x = 36/square(6); 
  printf("%d", x); 
  return 0; 
} 
// Output: 1 
```
- Preprocessors also support if-else directives which are typically used for conditional compilation.
```c
int main() 
{ 
#if VERBOSE >= 2 
  printf("Trace Message"); 
#endif 
}
```
- A header file may be included more than one time directly or indirectly, this leads to problems of redeclaration of same variables/functions. To avoid this problem, directives like defined, ifdef and ifndef are used.

- There are some standard macros which can be used to print program file (__FILE__), Date of compilation (__DATE__), Time of compilation (__TIME__) and Line Number in C code (__LINE__)
```c
#include <stdio.h> 
  
int main() 
{ 
   printf("Current File :%s\n", __FILE__ ); 
   printf("Current Date :%s\n", __DATE__ ); 
   printf("Current Time :%s\n", __TIME__ ); 
   printf("Line Number :%d\n", __LINE__ ); 
   return 0; 
} 
  
/* Output: 
Current File :C:\Users\GfG\Downloads\deleteBST.c 
Current Date :Feb 15 2014 
Current Time :07:04:25 
Line Number :8 */
```

- We can remove already defined macros using : 
#undef MACRO_NAME
```c
#include <stdio.h> 
#define LIMIT 100 
int main() 
{ 
  printf("%d",LIMIT); 
  //removing defined macro LIMIT 
  #undef LIMIT 
  //Next line causes error as LIMIT is not defined 
  printf("%d",LIMIT); 
  return 0; 
}
```

## C Standard
- The latest C standard is ISO/IEC 9899:2011, also known as C11 as the final draft was published in 2011. Before C11, there was C99.
- C standard leaves some behavior of many C constructs as undefined and some as unspecified to simplify the specification and allow some flexibility in implementation.  
- What to do with programs whose behavior is undefined or unspecified in standard?
- As a programmer, it is never a good idea to use programming constructs whose behaviour is undefined or unspecified, such programs should always be discouraged. The output of such programs may change with compiler and/or machine.

## Syntax
- Curly brackets:
  - Pair of curly brackets define a scope and mainly used in functions and control statements like if, else, loops. All functions must start and end with curly brackets.
- Function parameters:
  - if a function signature doesn’t specify any argument, it means that the function can be called with any number of parameters or without any parameters.
  - If function does not need any parameter, it's a best practice to write 'void' (e.g int main(void) { /* */ })

## int (1 sign bit + 31 data bits)
- Define any positive or negative integer.
- According to MinGW the size of one ‘int’ is 4 bytes which is equal to 32 bits (1 byte=8 bits).
- An ‘int’ type variable in C language is able to store only numbers till 2,147,483,647. Beyond this number ‘int’ fails to store precisely and even not correctly. ‘int’ is a 32 bit data type. 
- Whenever a number is being assigned to an ‘int’ type variable, it is first converted to its binary representation (that is in 0’s and 1’s) then it is kept in memory at specific location. 
- The sign is also represented by binary digits, 0 for positive sign and 1 for negative sign.

## Compiler
- C is a high level language and it needs a compiler to convert it into an executable code so that the program can be run on our machine.
- Compiler converts a C program into an executable. 
- There are four phases for a C program to become an executable:
  1. Pre-processing
  2. Compilation
  3. Assembly
  4. Linking

1. Pre-processing
- This is the first phase through which source code is passed. 
- This phase include:
  - Removal of Comments
  - Expansion of Macros
  - Expansion of the included files.

2. Compilation
- The next step is to compile filename.i and produce an intermediate compiled output file filename.s. 
- This file is in **assembly level instructions**.

3. Assembly
- In this phase the filename.s is taken as input and turned into filename.o by assembler. 
- This file contain **machine level instructions**. 
- At this phase, only existing code is converted into machine language, the function calls like printf() are not resolved.

4. Linking
- This is the final phase in which all the linking of function calls with their definitions are done. 
- Linker knows where all these functions are implemented. 
- Linker does some extra work also, it adds some extra code to our program which is required when the program starts and ends.

## Escape Sequences in C
- 256 numbers of characters in character set. 
- The entire character set is divided into 2 parts i.e. the ASCII characters set and the extended ASCII characters set. 
- Other characters are also there which are not the part of any characters set, known as ESCAPE characters.
- List of Escape Sequences
```
\a    Alarm or Beep   
\b    Backspace
\f    Form Feed
\n    New Line
\r    Carriage Return
\t    Tab (Horizontal)
\v    Vertical Tab
\\    Backslash
\'    Single Quote
\"    Double Quote
\?    Question Mark
\ooo  octal number
\xhh  hexadecimal number
\0    Null
```

## C/C++ Tokens
- A token is the smallest element of a program that is meaningful to the compiler.
- Tokens can be classified as follows:
  - Keywords
  - Identifiers
  - Constants
  - Strings
  - Special Symbols
  - Operators

1. Keyword: 
- Keywords are pre-defined or reserved words in a programming language. 
- Each keyword is meant to perform a specific function in a program. 
- Keywords are referred names for a compiler, they can’t be used as variable names. You cannot redefine keywords.
- However, you can specify text to be substituted for keywords before compilation by using C/C++ preprocessor directives.
- C language supports 32 keywords which are given below:
```c
auto         double      int        struct
break        else        long       switch
case         enum        register   typedef
char         extern      return     union
const        float       short      unsigned
continue     for         signed     void
default      goto        sizeof     volatile
do           if          static     while
```
- While in C++ there are 31 additional keywords other than C Keywords they are:
```cpp
asm          bool        catch          class
const_cast   delete      dynamic_cast   explicit 
export       false       friend         inline 
mutable      namespace   new            operator 
private      protected   public         reinterpret_cast
static_cast  template    this           throw
true         try         typeid         typename 
using        virtual     wchar_t 
```
2. Identifiers: 
- Identifiers are used as the general terminology for naming of variables, functions and arrays. 
- A special kind of identifier, called a statement label, can be used in goto statements.
- They must begin with a letter or underscore(_).
- They must consist of only letters, digits, or underscore. No other special character is allowed.
- It should not be a keyword.
- It must not contain white space.
- It should be up to 31 characters long as only first 31 characters are significant.

3. Constants: 
- Like normal variables, except their values cannot be modified by the program once they are defined. 
- Constants refer to fixed values. They are also called as literals.
- Constants may belong to any of the data type.
- Syntax:
```const data_type variable_name;``` (or) ```const data_type *variable_name;```

4. Strings: 
- Array of characters ended with a null character (‘\0’).
- This null character indicates the end of the string. 
- Strings are always enclosed in double quotes. 
- Whereas, a character is enclosed in single quotes in C and C++.
- Declarations for String:
```c
char string[20] = {‘g’, ’e’, ‘e’, ‘k’, ‘s’, ‘f’, ‘o’, ‘r’, ‘g’, ’e’, ‘e’, ‘k’, ‘s’, ‘\0’};
char string[20] = “geeksforgeeks”;
char string [] = “geeksforgeeks”;
```

5. Special Symbols
- [] () {}, ; * = #

6. Operators: 
- Operators are symbols that triggers an action when applied to C variables and other objects. 
- The data items on which operators act upon are called operands.
- Depending on the number of operands that an operator can act upon, operators can be classified as follows:
  - Unary Operators: 
    - Those operators that require only single operand to act upon are known as unary operators.
    - For Example increment and decrement operators
  - Binary Operators: 
    - Those operators that require two operands to act upon are called binary operators. 
    - Binary operators are classified into:
      - Arithmetic operators
      - Relational Operators
      - Logical Operators
      - Assignment Operators
      - Conditional Operators
      - Bitwise Operators
  - Ternary Operators: 
    - These operators requires three operands to act upon. 
    - For Example Conditional operator(?:).