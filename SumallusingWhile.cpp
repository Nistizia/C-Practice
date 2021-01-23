#include<stdio.h>
int main()
{
	int i=0;
	int num;
	int sum=0;
	while(i<8)
	{
		scanf("%d",&num);
		sum=num+sum;
		i++;
	}
	printf("%d",sum);
	return 0;
}
