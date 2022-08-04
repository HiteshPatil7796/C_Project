#include <stdio.h>
 
int main()
{
		int i,j,k[10][10],sum = 0;
		int a[10][10], b[10][10],c[10][10];
	 
		printf("\n Enter the elements of matrix A : ");
	 
	  	for(i=0;i<3;i++ )
	 	{
	   		for(j=0;j<3;j++)
	      	{
				scanf("%d", &a[i][j]);
			}
		}
		printf("\n Enter the elements of matrix B : ");
	 
	  	for(i=0;i<3;i++ )
	 	{
	   		for(j=0;j<3;j++)
	      	{
				scanf("%d", &b[i][j]);
			}
		}
 
    	for(i=0;i<3;i++)
    	{	
      		for (j=0;j<3;j++)
      		{
          		c[i][j]= sum+a[i][j]*b[i][j];
          		k[i][j]=c[i][j];
          		c[i][j]=0;
      		}
 			
        		sum = 0;
        		
      		
    	}
 
    printf("\n Multiplication Of A and B :\n");
 
		for (i=0;i<3;i++)
   		{
      		for(j=0;j<3;j++)
      		{
    			printf("%d\t",k[i][j]);
 			}
      		printf("\n");
    	}
  return 0;
}

 
