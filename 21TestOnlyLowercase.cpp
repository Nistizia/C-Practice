#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	scanf("%s",&x);
	for(int i=0;i<strlen(x);i++)
	{
		if(x[i]>=97 && x[i]<=122)
		{
			printf("%c",x[i]);
		}
	}
}
