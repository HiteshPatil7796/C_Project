#include <stdio.h>
#include <string.h>

main()
{
  	char str[10];
  	int i, len=0, count=0;
 
  	printf("\nEnter a String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	 	   	
  	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			count = 1;
			break;	
		} 
	}
	if(count == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome String", str);
	}	

}
