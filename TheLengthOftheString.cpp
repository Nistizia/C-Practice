#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	char check[]="abcdefghijklmnopqrstuvwxyz";
	int count[26]={};
	int length,i,j;
	scanf("%s",x);
	length = strlen(x);
		for(i=0;i<length;i++)
		{
			for(j=0;j<26;j++)
			{
				if(x[i]==check[j])
				{
					count[j]=count[j]+1;
				}
			}
		}
		for(j=0;j<26;j++)
		{
				if(count[j]!=0)
		  		{
					printf("%c = %d\n",check[j],count[j]);
				}
		}
	return 0;
	
}
