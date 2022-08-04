#include<stdio.h>
main()
{
	
	int num=0,num1,num2,ch;
	
	printf("\n Enter First Numbers : ");
	scanf("%d",&num1);
	
	printf("\n Enter Second Numbers : ");
	scanf("%d",&num2);
	
	printf("\n 1.Addition 		+ ");
	printf("\n 2.Substraction	- ");
	printf("\n 3.Multiplication	* ");
	printf("\n 4.Division		/ ");
	
	printf("\n Enter Your Choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("%d + %d = %d",num1,num2,num1+num2);
				break;
		case 2: printf("%d - %d = %d",num1,num2,num1-num2);
				break;
		case 3: printf("%d * %d = %d",num1,num2,num1*num2);
				break;
		case 4: printf("%d / %d = %d",num1,num2,num1/num2);
				break;
		
	}
}
