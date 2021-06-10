#include<stdio.h>
int main()
{
	int x;
	int i,j;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x;j++)
		{
			if(i>=j)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=x;i++)
	{
	for(j=1;j<=x;j++)
		{
			if(i+j>x)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
