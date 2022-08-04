#include<stdio.h>
main()
{
	int i=1, range=0;
	printf("\n Enter the Range : ");
	scanf("%d",&range);
	printf("\n Numbers which are divsible by 3 and 5   are : ");
	while(i<=range)
	{
		if(i%3==0 && i%5==0)
		{
			printf("\n %d",i);
		}
		i++;
	}
}
