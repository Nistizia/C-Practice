#include<stdio.h>
int main()
{
	int N;
	int ar[100];
	int i,j;
	scanf("%d",&N);
	for(i = 0; i < N ; i++)
	{
		scanf("%d",&ar[i]);
	}
	
	for(j = 0; j < N-1; j++)
	{
		for(i=0; i<N-1; i++)
		{
			if(ar[i] > ar[i+1])
			{
				int temp;
				temp = ar[i];
				ar[i] =ar[i+1];
				ar[i+1]= temp;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",ar[i]);
	}
	
	return 0;
}
