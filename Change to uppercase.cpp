#include<stdio.h>
#include<string.h>
int main()
{
	char R[100];
	int i;
	scanf("%s",R);
	for(i=0;i<strlen(R);i++)
	{
		if(R[i]>=97 && R[i>=122])
		{
			R[i]=R[i]-32;
			printf("%c",R[i]);
		}	
		else 
			printf("%c",R[i]);
	}
	return 0;
}
