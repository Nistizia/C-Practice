#include<stdio.h>
int main()
{
	int i;
	int num;
	int sum=0;
	for(i=0;i<8;i++)
	{
		scanf("%d",&num);
		sum=num+sum;
	}
	printf("%d",sum);
	return 0;
}
