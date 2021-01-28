#include<stdio.h>
int main(void)
{
	int num = 1;
	int counteven=0;
	int countodd=0;
	printf("Enter positive integer one per line\n");
	printf("Enter 0 to end the process\n");
	while(true)
	{
		printf("-> ");
		scanf("%d",&num);
		if(num % 2 == 0 && num > 0)
		{
			counteven++;
		}
		else if(num % 2 == 1 && num > 0)
		{
			countodd++;
		}
		else if(num==0)
		{
			break;
		}
		else
		{
			printf("the negative number won't be count\n");
		}
	}
	printf("End of process\n");
	printf("positive number that are even = %d\n",counteven);
	printf("positive number that are odd = %d",countodd);
	return 0;
}
