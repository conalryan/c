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
Current File :standard_macros.c
Current Date :Feb  6 2019
Current Time :23:22:53
Line Number :8 */
