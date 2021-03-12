#include<stdio.h>
int main()
{
	int n,i;
	int ans=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		ans = ans * (n-i);
	}
	printf("%d",ans);
}
