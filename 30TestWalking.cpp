#include<stdio.h>
int main()
{
	int n;
	int times;
	scanf("%d",&n);
	if(n%5==0)
	{
		times = n/5;
		printf("%d",times);	
	}
	if(n%5!=0)
	{
		times = (n/5)+1;
		printf("%d",times);
	}
	return 0;
}
