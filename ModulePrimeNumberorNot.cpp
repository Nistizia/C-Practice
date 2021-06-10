#include<stdio.h>
int isPrime(int x)
{
	int i;
	int count=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
			count++;
	}
	if(count>0)
		return 0;
	return 1;
}
int main()
{
	int n;
	int check;
	scanf("%d",&n);
	check = isPrime(n);
	if(n==1)
		printf("%d is not prime number",n);
	else if(check==0)
		printf("%d is not prime number",n);
	else 
		printf("%d is prime number",n);
	return 0;
}
