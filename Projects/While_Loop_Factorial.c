#include<stdio.h>
main()
{
	int i=1,n,fact=1;
	printf("\n Enter a Number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\n factorial of %d is %d ",n,fact);
}
