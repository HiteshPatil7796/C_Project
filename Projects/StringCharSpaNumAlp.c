#include <stdio.h>  
#include <string.h>  
 
main()  
{  
    char str[20];  
    int ccount=0,i,len=0,scount=0,acount=0,numcount=0,sccount=0;  
   
  	printf("\nEnter a String :  ");
  	gets(str);
  	len=strlen(str);
    for(i=0;i<len;i++)
    {

        if(str[i]!=' ') 
		{
            ccount++;   
    	}
		if(str[i]==' ')  
        {
            scount++; 
		}
		if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122) )
        {
		  	acount++;
		}
 		if(str[i]>=48 && str[i]<=57)
       	{
         	numcount++;  
		}
		/*else
		{
			sccount++;
		}*/
	}
    printf("\nTotal number of characters in a string: %d", ccount); 
    printf("\nTotal number of Spaces in a string: %d", scount);
    printf("\nTotal number of Alphabets in a string: %d", acount);
    printf("\nTotal number of Numbers in a string: %d", numcount);
    printf("\nTotal number of Special Charin a string: %d", sccount);
 	
}  
