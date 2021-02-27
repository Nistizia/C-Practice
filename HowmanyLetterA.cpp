#include<stdio.h>
#include<string.h>
int main ()
{
	char n[100];
	int i;
	int count=0;
	scanf("%s",n);
	for(i=0;i<strlen(n);i++)
	{
		if(n[i]=='A')
		{
			count=count+1;
		}
	}
	printf("%d",count);
}
