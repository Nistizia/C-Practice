#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i;
	scanf("%s",x);
	for(i=0;i<strlen(x);i++)
	{
		if(x[i] >= 65 && x[i] <= 90)
			x[i]=x[i]+32;
		printf("%c",x[i]);
	}
	return 0;
}
