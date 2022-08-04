#include<stdio.h>
main()
{
	int num;
	printf("\n Enter A number : ");
	scanf("%d",&num);
	
	switch(num%2)
	{
		case 0:	printf("\n %d is Even Number");
				break;
		case 1:	printf("\n %d is Odd Number");
				break;
	}
}
