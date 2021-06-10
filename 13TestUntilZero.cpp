#include<stdio.h>
int main()
{
	int x,i;
	int sum=0;
	do
	{
		scanf("%d",&x);
		sum = sum+x;
	}while(x!=0);
	printf("%d",sum);
	return 0;
	
}
