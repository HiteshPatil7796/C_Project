#include<stdio.h>
void swap(int, int);
main()
{
	int a,b;
	printf("\n Enter a and b : ");
	scanf("%d%d",&a,&b);
	printf("\n Before Swaping a=%d b=%d",a,b);
	swap(a,b);
}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping : a=%d b=%d",a,b);
}
