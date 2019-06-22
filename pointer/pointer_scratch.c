#include <stdio.h>

/*

Declaring Pointers:
- A pointer is a numeric variable and, like all variables, must be declared before it can be used.
- Pointer variable names follow the same rules as other variables and must be unique
- Convention is that a pointer variable name be prefixed with 'p_' (e.g. int my_int = 22; int *p_my_int;)

Indirection Operator (*):
- Indicates that the variable is a pointer to the given type and not a variable of the given type.
- When * precedes the name of a pointer, it refers to the variable pointed to, i.e. the contents of the variable.
- Indirect Access or Indirection: Accessing the contents of a variable by using a pointer to the variable.

Initialize Pointer (&):
- Pointer holds the address of a variable.
- To assign an address to the pointer you must use the address-of operator (&).
- The ampersand operator (&) when placed before a variable, the address-of operator (&) returns the address of the variable.

 */
int main(void)
{
  int init = 22;
  int *p_un_init;
  int *p_init = &init;

  p_un_init = &init; // assign the address of init to p_un_init

  printf("init: %d\n", init);
  // ./pointer/pointer_scratch.c:11:25: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
  // printf("&init: %d\n", &init);
  // @see Indirection Operator (*) above.

  // ./pointer/pointer_scratch.c:13:26: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
  // printf("p_un_init: %d\n", p_un_init);
  // @see Indirection Operator (*) above.

  // When * precedes the name of a pointer, it refers to the variable pointed to, i.e. the contents of the variable.
  printf("*p_un_init: %d\n", *p_un_init);

  // ./pointer/pointer_scratch.c:41:26: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
  // printf("p_init: %d\n", p_init);
  printf("*p_init: %d\n", *p_init);
}