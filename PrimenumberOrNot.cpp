#include<stdio.h>
int main()
{
	int n;
	int i;
	int count=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(n==1)
		printf("%d is not prime number",n);
	else if(count>0)
		printf("%d is not prime number",n);
	else
		printf("%d is prime number",n);
		
	return 0;
}
