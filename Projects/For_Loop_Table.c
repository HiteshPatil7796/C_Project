#include<stdio.h>
main()
{
	int i,n,table=0;
	
	printf("\n Enter a number : ");
	scanf("%d",&n);
	printf("\n Table of %d is : ",n);
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("\n %d",table);
	}
}
