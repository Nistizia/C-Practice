#include<stdio.h>
int main()
{
	char A;
	int num;
	int sum;
	int i;
	for(i=0;1;i++)
	{
		printf("Want to Enter Number? (y/n) : ");
		scanf(" %c",&A);
		if(A == 'y')
		{
			printf("Enter Number :");
			scanf("%d",&num);
			sum = sum + num;
		}
		if(A == 'n')
		break;
	}
	printf("sum = %d",sum);
}
