#include<stdio.h>
main()
{
	char ch;
	printf("\n Enter an Alphabet : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':	printf("\n %c is a Vowel ",ch);
					break;
		case 'e':	printf("\n %c is a Vowel ",ch);
					break;
		case 'i':	printf("\n %c is a Vowel ",ch);
					break;
		case 'o':	printf("\n %c is a Vowel ",ch);
					break;
		case 'u':	printf("\n %c is a Vowel ",ch);
					break;
		case 'A':	printf("\n %c is a Vowel ",ch);
					break;
		case 'E':	printf("\n %c is a Vowel ",ch);
					break;
		case 'I':	printf("\n %c is a Vowel ",ch);
					break;
		case 'O':	printf("\n %c is a Vowel ",ch);
					break;
		case 'U':	printf("\n %c is a Vowel ",ch);
					break;
		default:	printf("\n %c is Consonant",ch);
					break;
	}
}
