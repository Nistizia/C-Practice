#include<stdio.h>
int main()
{
	char x;
	scanf("%c",x);
	if(x >= 65 && x <=90)
	{
		printf("Upper Case");
	}
	if(x >=97 && x <=122)
	{
		printf("Lower Case");
	}
	return 0;
}
