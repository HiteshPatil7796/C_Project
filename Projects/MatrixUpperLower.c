#include<stdio.h>
main()
{
	int i,j,arr[3][3];
   
   printf("\n Enter the elements for the Matrix: \n");
   
   for(i=0;i<3;i++)
   {
		for(j=0;j<3;j++)
		{
        	scanf("%d",&arr[i][j]);
      	}
   }
   printf("\n Lower Triangular Matrix is: \n");
   for(i=0;i<3;i++)
   {
      	for(j=0;j<3;j++)
		{
    		if(i>=j)
			{
        		printf("%d ",arr[i][j]);
      		}
      		else
			{
         		printf("0 ");
         	}
   		}
   		printf("\n");
   }
   printf("\n The Upper Triangular Matrix is: \n");
   for(i=0;i<3;i++)
   {
      	for(j=0;j<3;j++)
		{
        	if(i>j)
			{
            	printf("0 ");
         	}
         	else
			{
            	printf("%d ",arr[i][i]);
			}
      	}
      	printf("\n");
   }
}
