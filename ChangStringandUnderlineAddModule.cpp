#include<stdio.h>
#include<ctype.h>
#include<string.h>
void PrintChar(char , int );

int main()
{
	char x[31];
	char y[31];
	char z[31];
	int i, j, length,space;
	printf("Enter Your String :");
	scanf("%s",x);
	printf("Your Output  : \n");
	length = strlen(x);
	space = (80-length)/2;
	
	PrintChar(' ', space);
	printf("%s", x);
	printf("\n");
	
	PrintChar(' ', space);
	PrintChar('-', length);
	printf("\n");
	
	PrintChar(' ', space);
	for(j = 0; j < strlen(x); j++)
		y[j] = toupper(x[j]);	
	printf("%s", y);
	printf("\n");	
	
	PrintChar(' ', space);
	PrintChar('+', length);
	printf("\n");
	
	PrintChar(' ', space);
	for(j = 0; j < strlen(x); j++)
		z[j] = tolower(x[j]);	
	printf("%s", z);
	printf("\n");
	
	PrintChar(' ', space);
	PrintChar('*', length);
	printf("\n");
	
	return 0;
}

void PrintChar(char a , int n)
{
	int i;
	for(i = 1; i <= n; i++)
		printf("%c",a);	
}
