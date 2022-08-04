#include<stdio.h>
main()
{
	int i=1,n,table;
	printf("\n Enter a number : ");
	scanf("%d",&n);
	printf("\n Table of %d is : ",n);
	while(i<=10)
	{
		table=i*n;
		printf("\n %d",table);
		i++;
	}
}
