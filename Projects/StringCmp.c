#include<stdio.h>
int compare(char[],char[]);
main()
{
	char s1[20],s2[20];
	int comp;	
	printf("\n Enter string one : ");
	gets(s1);
	printf("\n Enter String two : ");
	gets(s2);
	comp=compare(s1,s2);
	
	if(comp==0)
	{  
   		printf("strings are same");  
   	}
	else
	{  
   		printf("strings are not same");  
   	}
}

int compare(char a[],char b[])  
{  
	int i,count=0;
	
	while(a[i]!='\0' &&b[i]!='\0')
    {  
       if(a[i]!=b[i])  
       {  
           count=1;  
           break;  
       }  
       i++; 
	}
	if(count==0)  
	{
    	return 0;  
	}
    else
	{  
    	return 1; 
	} 
}  
