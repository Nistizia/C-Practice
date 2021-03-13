#include<stdio.h>
int factorial(int n)
{
	int i;
	int ans=1;
	for(i=0;i<n;i++)
	{
		ans = ans*(n-i);
		
	}
	return ans;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",factorial(n));
}
