#include<stdio.h>
int main()
{
	int n,i;
	int x[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		if(x[i]%3==0 && x[i]%5 == 0)
			printf("%d ",x[i]);
	}
	return 0;
}
