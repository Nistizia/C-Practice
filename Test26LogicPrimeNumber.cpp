#include<stdio.h>
int main()
{
	int X;
	int i;
	int count=0;
	scanf("%d",&X);
	for(i=2;i<X;i++)
	{
		if(X%i==0)
			count++;
	}
	if(count>0)
		printf("%d is not Prime Number",X);
	else
		printf("%d is  Prime Number",X);
	return 0;
}
