
#include<string.h>
#include<stdio.h>
#include "myutils.h"
#include "bitmask.h"
#include "mystring.h"

#include <stdarg.h>


int main()
{
char s1[10]="Chithal";
char s2[10]="Pathal";
int a = 5, r = 1; 

printf("%d\n",mystrlen(s1));
printf("%s\n",mystrcpy(s1,s2));
printf("%s\n",mystrcat(s1,s2));
printf("%s\n",mystrcmp(s1,s2));
printf("%d\n",Factorial(5));
printf("%d\n",Prime(6));
printf("%d\n",Palindrome(1001));
printf("%d\n",vsum(3,6,4,5));
printf("%d with %d-th bit Set: %d\n", a, r, set(a, r)); 
printf("%d with %d-th bit Cleared: %d\n", a, r, clear(a, r)); 
printf("%d with %d-th bit Toggled: %d\n", a, r, flip(a, r));
if(query(a, r))
  printf("Bit number %d is SET in number %d.\n",r,a);
else
  printf("Bit number %d is not SET in number %d.\n",r,a);
return 0; 

}