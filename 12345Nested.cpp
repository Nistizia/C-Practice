#include<stdio.h>
int main()
{
	int i;
	int j;
	int num;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1)
				printf("1");
			else if(i==2)
				printf("2");
			else if(i==3)
				printf("3");
			else if(i==4)
				printf("4");
			else
				printf("5");
		}
		printf("\n");
	}
	return 0;
}
