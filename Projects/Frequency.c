#include <stdio.h>
main()
{
    int arr[10],frequency[10],n,i,j,ctr;
	
       	printf("\n Enter the size of the Array  :");
       	scanf("%d",&n);
   
       	printf("Enter %d elements in the array :\n",n);
       	for(i=0;i<n;i++)
	   	{
	      scanf("%d",&arr[i]);
		  frequency[i] = -1;
		}
  	   	for(i=0; i<n; i++)
    	{
        	ctr = 1;	
        	for(j=i+1; j<n; j++)
        	{
            	if(arr[i]==arr[j])
            	{
                	ctr++;
                	frequency[j] = 0;
            	}
        	}
			if(frequency[i]!=0)
        	{
            	frequency[i] = ctr;
        	}
    	}
    	printf("\nThe frequency of all elements of array : \n");
    	for(i=0; i<n; i++)
    	{
        	if(frequency[i]!=0)
        	{
            	printf("%d occurs %d times\n", arr[i], frequency[i]);
        	}
    	}	
}
