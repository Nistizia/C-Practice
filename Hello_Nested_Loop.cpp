#include<stdio.h>
int main()
{
	int R;
	int C;
	int i=0;
	int j;
	scanf("%d",&R);
	scanf("%d",&C);
	for(i=0;i<=R;i++)
	{
		j=0;
		for(j=0;j<=C;j++)
		{
			printf("(%d, %d) ",i,j);
		}
		printf("\n");
	}
	
	return 0;
	
}


