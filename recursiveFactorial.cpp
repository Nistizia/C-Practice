#include<stdio.h>
int Factorial(int);
int main()
{
	int n,f;
	printf("Enter positive integer : ");
	scanf("%d",&n);
	f = Factorial(n);
	printf("factotrial of %d is %d",n,f);
	return 0;
}
int Factorial(int x)
{
	if(x>1)
		return x*Factorial(x-1);
	else
		return 1;
}
