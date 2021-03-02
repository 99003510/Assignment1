#include "myutils.h"
//factorial
int Factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return (n*factorial(n-1));
}

//prime number
int Prime(int a)
{
   int i;

   for ( i=2;i<= (a-1);i++ )
   {
      if ( a%i == 0 )
     return 0;
   }
   return 1;
}

//palindrome
int Palindrome(int n){
    int r,val=0,temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        val=(val*10)+r;
        n=n/10;
    }
    if(temp==val)
       return 1;
    else
       return 0;

}
//vsum
#include <stdarg.h> 
int vsum(int x, ...)
{

    va_list valist; 
  
    int sum = 0, i; 
  
    va_start(valist, x); 
    for (i = 0; i < x; i++)  
        sum += va_arg(valist, int); 
  
    va_end(valist); 
  
    return sum
}