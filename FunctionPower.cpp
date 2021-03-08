#include<stdio.h>
int square(int x)
{
	int Ans=x*x;
	return Ans;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",square(a));
	return 0;
}
