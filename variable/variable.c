#include <stdio.h>

/*

Variable: 
- Name assigned to a location in memory to store information.
- Before you can use a variable in a C program, it must be declared.

Declaration (Variable Declaration): 
- Tells the compiler the name and type of a variable. 
- Can also initialize variable to specific value.

Definition (Variable Definition): 
- Inform compiler of variable name and type.
 
Initializing Variables:
- When you declare a variable, you instruct the copoiler to set aside storage spce ofr the variable.
- However, the value stored in the space (the value of the variable) isn't defined.
- Before using a variable, you should always initialize it to a known value.

Assignment Statement:
- Can be done independently of the variable definition.
- Note that assignment statement uses the equal sign (=) to assign a value to a memory location referenced by the variable name.

 */

int main(void)
{
  int un_initialized;
  int initialized = 22;
  
  printf("un_initialized: %d\n", un_initialized);
  printf("initialized: %d\n", initialized);

  un_initialized = 33;

  printf("un_initialized now initialized: %d\n", un_initialized);
  printf("initialized: %d\n", initialized);
}