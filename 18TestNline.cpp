#include<stdio.h>
int main()
{
	int n;
	int x[100];
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",x[i]);
	}
	return 0;
}
