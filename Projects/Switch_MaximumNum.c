#include<stdio.h>
main()
{
	int a,b;
	printf("\n Enter two Numbers : ");
	scanf("%d%d",&a,&b);
	
	switch(a>b)
	{
		case 0:	printf("%d is Maximum ",b);
				break;
		case 1: printf("%d is maximum ",a);
				break;
		default: printf("\n invalid");
	}
}
