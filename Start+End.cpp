#include<stdio.h>
int main()
{
	int start;
	int end;
	int i;
	int ones;
	int tens;
	scanf("%d",&start);
	scanf("%d",&end);
	for(i = start; i <= end;i++)
	{
		ones = i % 10;
		tens = i / 10;
		if( ones + tens == 10)
			printf(" %d ",i);
	}
	return 0;
}
