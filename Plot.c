#include<stdio.h>
int main(void)
{
	int i;
	int j;
	int num;
	printf("Enter an integer -> ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			if(i>=j)
				printf("*");
		}	
		printf("\n");
	
	}
	for(i=1;i<=num;i++) 
	{
		for(j=1;j<=num;j++)
		{
			if(i+j>=num+1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
