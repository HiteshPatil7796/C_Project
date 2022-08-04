#include<stdio.h>
main()
{
	int Math, Physics, Chemistry, Total;
	
	printf("Enter marks in Maths : ");
	scanf("%d",&Math);
	
	printf("Enter marks in Physics : ");
	scanf("%d",&Physics);
	
	printf("Enter marks in Chemistry : ");
	scanf("%d",&Chemistry);
	
	Total = Math+Physics+Chemistry;
	printf("Total of Marks : %d",Total);
	if(Math>=65 && Physics>=55 && Chemistry>=50 && Total>=180)
	{
		printf("\n Eligible  for course");
	}
	else
	{
		printf("\n Not eligible for course");
	}		
}
