#include<stdio.h>
int main()
{
	int x,i;
	int ans = 1;
	do
	{
		scanf("%d",&x);
		if(x!=0)
		{
			ans = ans*x;
		}
		
	}while(x!=0);
	printf("%d",ans);
	return 0;
}
