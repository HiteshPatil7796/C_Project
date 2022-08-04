#include<stdio.h>
main()
{
	int num=0;
	
	printf("\n Enter a Number : ");
	scanf("%d",&num);
	
	switch(num>0)
	{
		case 0:
				if(num<0)
				{
					printf("\n %d  is negative number",num);
				}
				else
				{
					printf("\n %d is a zero ",num);
				}
				break;
		
		case 1: printf("\n %d is a positive number ",num);
				break;
	}
}
