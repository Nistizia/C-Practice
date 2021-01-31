#include<stdio.h>
int main()
{
	int n;
	int i;
	int j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
				printf("*");
			else if(i==1)
				printf("*");
			else if(i+j==n+1)
				printf("*");
			else if(j==n)
				printf("*");
			else if(j==1)
				printf("*");
			else if(i==n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
