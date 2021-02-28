#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	int count=0;
	int i;
	scanf("%s",x);
	for(i=0;i<strlen(x);i++)
	{
		if(x[i]=='A'|| x[i]=='a')
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
