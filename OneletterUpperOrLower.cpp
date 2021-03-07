#include<stdio.h>
#include<string.h>
int main()
{
	char x;
	scanf("%c",&x);
	if(x>=65 && x<=90)
	{
		printf("Uppercase");
	}
	if(x>=97 && x<=122)
	{
		printf("Lowercase");
	}
	
	return 0;
}
