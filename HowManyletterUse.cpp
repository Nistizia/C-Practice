#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char A[]="abcdefghijklmnopqrstuvwxyz";
	int count[26]={};
	int i,j;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<26;j++)
		{
			if(str[i]==A[j])
			{
				count[j]=count[j]+1;
			}
		}
	}
	for(j=0;j<26;j++)
	{
		if(count[j]>0)
		{
			printf("%c = %d \n",A[j],count[j]);
		}
	}
	return 0;
}
