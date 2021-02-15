#include<stdio.h>
int main()
{
	int A[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
