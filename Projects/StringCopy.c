#include <stdio.h>
main()
{
  	char str1[20],str2[20];
  	int i;
 
  	printf("\nEnter a String :  ");
  	gets(str1);
 
  	for (i=0;str1[i]!='\0';i++)
  	{
  		str2[i]=str1[i];
  	}
  	str2[i]= '\0';

  	printf("\n After Copying :  %s",str2);
}
