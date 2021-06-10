#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char x[31];
	char y[31];
	char z[31];
	int i, j;
	printf("Enter Your String : ");
	scanf("%s",x);
	printf("Your Output : \n");

	/* Print Input String */
	for(i = 1; i <= (80-strlen(x))/2; i++)
		printf(" ");
	printf("%s", x);
	printf("\n");
	
	/* Print - */
	for(i = 1; i <= (80-strlen(x))/2; i++)
		printf(" ");
	for(j = 0; j < strlen(x); j++)
		printf("-");	
	printf("\n");
	
	/* Print Upper String */
	for(i = 1; i <= (80-strlen(x))/2; i++)
		printf(" ");
	for(j = 0; j < strlen(x); j++)
		y[j] = toupper(x[j]);	
	printf("%s", y);
	printf("\n");	
	
	/* Print + */
	for(i = 1; i <= (80-strlen(x))/2; i++)
		printf(" ");
	for(j = 0; j < strlen(x); j++)
		printf("+");	
	printf("\n");

  	/* Print Lower String */
	for(i = 1; i <= (80-strlen(x))/2; i++)
		printf(" ");
	for(j = 0; j < strlen(x); j++)
		z[j] = tolower(x[j]);	
	printf("%s", z);
	printf("\n");	

	/* Print * */
	for(i = 1; i <= (80-strlen(x))/2; i++)
		printf(" ");
	for(j = 0; j < strlen(x); j++)
		printf("*");	
	printf("\n");

	return 0;
}
