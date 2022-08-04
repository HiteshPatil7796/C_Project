#include <stdio.h>
main()
{
 	
	int i,j,sum=0,arr[3][3];
	int ;
	 
	printf("Enter the Elements of the Matrix : \n");
	
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++) 
	    {
	        scanf("%d",&arr[i][j]);
	    }
	}
	 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++) 
	    {
	   	    sum=sum+arr[i][j] ;
	    }
 		printf("\n Addition of the %d row is = %d\n",i,sum);
        sum=0;
 	}
    sum=0;
    
	for(j=0;j<3;j++) 
    {
    	for(i=0;i<3;i++)
        {
            sum=sum+arr[i][j];
        }
		printf("\n Addition of the %d column is = %d\n",j,sum);
        sum=0;
    }
 
}
