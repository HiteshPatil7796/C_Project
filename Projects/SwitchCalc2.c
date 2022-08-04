#include<stdio.h>
main()
{
	int num1,num2, result=0;
	char ch;
	
	printf("Number 1 [+-/] Number 2 : ");
	scanf("%d%c%d",&num1,&ch,&num2);
	
	switch(ch)
	{
		case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
	}
	 printf("%d %c %d = %d", num1, ch, num2, result);
}
