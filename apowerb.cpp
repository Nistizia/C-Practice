#include<stdio.h>
int main()
{
	int i;
	int a;
	int b;
	int ans=1;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		ans=a*ans;
	}
	printf("%d",ans);
}
