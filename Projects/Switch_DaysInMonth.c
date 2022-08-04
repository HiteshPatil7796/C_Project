#include<stdio.h>
main()
{
	int n;
	printf("\n Enter the number of Month between 1 to 12 : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: printf("\n January has 31 days ");
				break;
		case 2: printf("\n February has 28/29 days ");
				break;
		case 3: printf("\n March has 31 days ");
				break;
		case 4: printf("\n April has 30 days ");
				break;
		case 5: printf("\n May has 31 days ");
				break;
		case 6: printf("\n Jun has 30 days ");
				break;
		case 7: printf("\n July has 31 days ");
				break;
		case 8: printf("\n August has 31 days ");
				break;
		case 9: printf("\n Sepember has 30 days ");
				break;
		case 10: printf("\n October has 31 days ");
				break;
		case 11: printf("\n November has 30 days ");
				break;
		case 12: printf("\n December has 31 days ");
				break;
				
		default:printf("\n Invalid number please check the month number . . . ."); 
	}
}
