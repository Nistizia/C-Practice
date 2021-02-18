#include<stdio.h>
int main()
{
	int A[100000];
	int i;
	int count=0;
	for(i=0;1;i++)
	{
		scanf("%d",&A[i]);
		if(A[i]==0)
			break;
		count++;
	}
//	printf("Count = %d\n",count);
	for(i=count-1;i>=0;i--)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
