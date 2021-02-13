#include<stdio.h>
int main(void)
{
	int n,i,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans=(i*i)+i-4;
		printf("%d",ans);
		printf("\n");
	}
	return 0;
}
