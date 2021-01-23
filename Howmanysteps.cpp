#include<stdio.h>
int main()
{
	int num;
	int i = 0;
	scanf("%d",&num);
	while(num != 0)
	{
		if(num % 2 == 0)
		{
			num = num / 2;
			i=i+1;
		}
		if(num % 2 != 0)
		{
			num = num - 1;
			i=i+1;
		}
	}
	printf("%d steps",i);
	return 0;
	
}
