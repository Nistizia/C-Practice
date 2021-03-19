#include<stdio.h>
int main()
{
	int x,y,i;
	scanf("%d",&x);
	scanf("%d",&y);
	int ans=1;
	for (i=0;i<y;i++)
	{
		ans = x*ans;
	}
	printf("%d",ans);
	return 0;
}
