#include<stdio.h>
main()
{
	int i, range=0;
	printf("Enter the range : ");
	scanf("%d",&range);
	printf("Nubers which are divisble by 3 and 5 are :  ");
	for(i=1;i<=range;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("\n %d  ",i);
		}
	}
}	
