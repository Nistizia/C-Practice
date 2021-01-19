#include<stdio.h>
int main()
{
	int i = 0;
	int number;
	int sum = 0;
	scanf("%d",&number);
	while(i <= number)
	{	
		sum = i + sum;
		i++;
	}
	printf("%d",sum);
	return 0;
}
