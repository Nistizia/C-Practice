#include<stdio.h>
int main(void)
{
	int i=1;
	int j=1;
	int num;
	printf("Enter an integer -> ");
	scanf("%d",&num);
	while(i<=num)
	{	j=1;
		while(j<=num)
		{
			if(j<=i)
			{
				printf("*");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	i=1;
	while(i<=num)
	{ 
		j=1;
		while(j<=num)
		{
			if(i+j>=num+1)
			{
				printf("*");
			}
			else 
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
