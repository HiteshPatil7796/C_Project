#include<stdio.h>
main()
{
	int i=1, sum=0;
	
	while(i<=100)
	{
		sum=sum+i;
		i++;
	}
	printf("\n Addition of Numbers from 1 to 100 : %d",sum);
}
