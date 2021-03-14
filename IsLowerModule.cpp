#include<stdio.h>
int islower(char x)
{
	if(x>=97 && x<= 122)
		return 1;
	else if(x>=65 && x<= 90)
		return 0;
}
int main()
{
	char n;
	scanf("%c",&n);
	if(islower(n)==1)
		printf("Lower Case");
		
	else if(islower(n)==0)
		printf("Upper Case");
	return 0;
}
