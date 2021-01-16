#include<stdio.h>
int main()
{
	int i;
	int number;
	int max=-9999;
	for(i=0;i<10;i++)
	{
		scanf("%d",&number);
		if(number>max)
		{
			max=number;
		}
	}
	printf("%d",max);
}
