#include<stdio.h>
main()
{
	int n;
	printf("\n Enter the number of day : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
				printf("Its Monday");
				break;
		case 2:
				printf("Its Tuesday");
				break;
		case 3:
				printf("Its Wednesday");
				break;
		case 4:
				printf("Its Thursday");
				break;
		case 5:
				printf("Its Friday");
				break;
		case 6:
				printf("Its Saturday");
				break;
		case 7:
				printf("Its Sunday");
				break;	
		default:
				printf("\n Wrong choice . . . . ");	
	}
}
