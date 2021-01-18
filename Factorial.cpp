#include<stdio.h>
int main()
{
	int i;
	int ans=1;
	int number;
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		ans=ans*i;
	}
	printf("%d",ans);
}
