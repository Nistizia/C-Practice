#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[1000];
	char up[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char low[]="abcdefghijklmnopqrstuvwxyz";
	char num[]="0123456789";
	int numup[26];
	int numlow[26];
	int numnum[26];
	int i,j,k,n;
	int pass = 0;
	printf("Enter Your string :");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] = '\0';
	for(j=0;j<26;j++)
	{
		numup[j]=j+97;
	}
	for(k=0;k<26;k++)
	{
		numlow[k]=k+65;
	}
	for(n=0;n<10;n++)
	{
		numnum[n]=n+48;
	}
	
	for(i=0;i<strlen(str);i++)
	{
		pass = 0;
		for(j=0;j<26;j++)
		{
			if(str[i] == up[j])
			{
				printf("%d",numup[j]);
				pass=1;
			}
		}
		for(int k=0;k<26;k++)
		{
			if(str[i] == low[k])
			{
				printf("%d",numlow[k]);
				pass=1;
			}
		}
		for(int n=0;n<10;n++)
		{
			if(str[i] == num[n])
			{
				printf("%d",numnum[n]);
				pass=1;
			}
		}
		if(pass==0)
		{
			printf("32");
		}
		printf("|");
	}

	return 0;
}
