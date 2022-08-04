#include<stdio.h>
main()
{
	int phy,chem,bio,math,comp,per,sum=0;
	printf("\n Enter Physics, Chemistry, Bio, Maths, Comp subjects marks :");
	scanf("%d %d %d %d %d",&phy,&chem,&bio,&math,&comp);
	
	sum=phy+chem+bio+math+comp;
	printf("\n sum %d",sum);
	
	per=sum*100/500;
	printf("\n Percentage is %d",per);
	

	if(per>=90 && per<=100)
	{
		printf("\n Grade A");
	}
	else if(per>=80 && per<90)
	{
		printf("\n Grade B");
	}
	else if(per>=70 && per<80)
	{
		printf("\n Grade C");
	}
	else if(per>=60 && per<70)
	{
		printf("\n Grade D");
	}
	else if (per>=40 && per<60)
	{
		printf("\n Grade E");
	}
	else 
	{
		printf("\n Grade F");
	}
}

