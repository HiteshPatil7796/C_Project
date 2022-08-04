#include<iostream.h>
void factorial(int n);
main()
{
  int n,i,fact=1;
  printf("Enter a Number : ");
  scanf("%d",n);
  factorial(n);
 
}
void factorial(int n)
{
   for(i=1,i<=n;i++)
  {
    fact=fact*i;
  }
  printf("Factorial of given number is : %d",fact);
}
