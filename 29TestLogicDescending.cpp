#include<stdio.h>
int main()
{
	int N;
	int i,j;
	int x[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=0;j<N-1;j++)
	{
		for(i=0;i<N-1;i++)
		{
			if(x[i]>x[i+1])
			{
				int temp;
				temp =x[i];
				x[i]= x[i+1];
				x[i+1]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",x[i]);
	}
	return 0;
}
