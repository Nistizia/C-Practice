#include<stdio.h>
int main()
{
	int A[10];
	int i;
	int sum = 0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
		if(i%2==0)
		{
			sum = sum + A[i];
		}
	}
	printf("%d",sum);
	return 0;
}
	
