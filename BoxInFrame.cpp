#include<stdio.h>
int main()
{
	int i, j, n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==n-1 && j!=1 && j!=n)
				printf(" ");
			else if(j==n-1 && i!=1 && i!=n)
				printf(" ");
			else if(i==2 && j!=1 && j!=n)
				printf(" ");
			else if(j==2 && i!=1 && i!=n)
				printf(" ");
			else 
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
