#include<stdio.h>
main()
{
	int n,i,temp=0,num1=0,num2=1;
	printf("\n Enter the Number : ");
	scanf("%d",&n);
	printf("\n 0 1 ");
	for(i=2;i<=n;i++)
	{
		temp=num1+num2;
		printf("\t %d",temp);
		num1=num2;
		num2=temp;
	}
}
