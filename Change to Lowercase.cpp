#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char O[100];
	int i;
	scanf("%s",O);
	for(i=0;i<strlen(O);i++)
	{
		if(O[i]>=65 && O[i]<=90)
		{
			O[i]=O[i]+32;
			printf("%c",O[i]);
		}
		else 
			printf("%c",O[i]);
	}
	return 0;
}
