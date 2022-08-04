#include<stdio.h>
void swap(int *, int *);
main()
{
	int a,b;
	printf("\n Enter values of a and b : ");
	scanf("%d%d",&a,&b);
	
	swap(&a,&b);
}
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	
	printf("\n After swap : a=%d b=%d ",*a,*b);
}
