#include<stdio.h>
#include<string.h>
int main()
{
	char E[100];
	int i;
	scanf("%s",&E);
	for(i=0;i<strlen(E);i++)
	{
		if(E[i] >= 97 && E[i] <= 122)
			E[i]=E[i]-32;
		printf("%c",E[i]);
	}
	return 0;
}
