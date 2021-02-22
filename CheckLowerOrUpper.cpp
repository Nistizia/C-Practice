#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if(x >= 65 && x <= 90)
		printf("Yes");
	else if(x >= 97 && x <= 122)
		printf("No");
	else
		printf("Error");
}
