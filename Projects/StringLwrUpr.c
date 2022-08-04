#include<stdio.h>
main()
{
	int i;
   	char string[20];
   
   	printf("Enter the string : ");
   	gets(string);
   
   	for(i=0;string[i]!='\0';i++)
	{
    	if(string[i]>=97&&string[i]<=122)
	  	{
        	string[i]=string[i]-32;
      	}
   	}
   	printf(" Upper case string is : ");
   	puts(string);
}
