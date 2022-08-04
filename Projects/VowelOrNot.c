#include<stdio.h>
main()
{
	char ch;
	printf("Enter an Alphabet : ");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("An alhabet is Vowel ");
	}
	else
	{
		printf("its not Vowel ");
	}
}
