#include<stdio.h>
int main()
{
	int i;
	int j;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i>=j)
			{
				printf("%d",n);
			}
		}
		printf("\n");
	}
	
	return 0;
	
}
