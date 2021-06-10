#include<stdio.h>
int main()
{
	int N;
	int i,j;
	int count=0;
	scanf("%d",&N);
	for(i=2;i<=N;i++)
	{	
	    count=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count <=1 )
			printf("%d ",i);
	}
	return 0;
}
