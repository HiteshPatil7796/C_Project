
#include<stdio.h>
void Recursion(int n);
int n,temp=0,num1=0,num2=1;
main()
{
	
	printf("\n Enter the Number : ");
	scanf("%d",&n);
	printf("\n 0 1");
	Recursion(n);
}

void Recursion(int n)
{
		if(n>0)
		{
			temp=num1+num2;
			printf(" %d",temp);
			num1=num2;
			num2=temp;
			n--;
			Recursion(n);
		}
}
