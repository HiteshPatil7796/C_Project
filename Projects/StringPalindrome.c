#include <stdio.h>
#include <string.h>
 
main()
{
  	char str[10], revstr[10];
  	int count;
 
  	printf("\n Enter a String :  ");
  	gets(str);

  	strcpy(revstr,str);

  	strrev(revstr);

	count=strcmp(str, revstr); 

	if(count==0)
	{
		printf("\n %s is a Palindrome String",str);
	}
	else
	{
		printf("\n %s is Not Palindrome String",str);
	}	

}

