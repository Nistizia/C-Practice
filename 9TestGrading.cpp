#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>80)
	{
		printf("A");
	}
	else if(x>70)
	{
		printf("B");
	}
	else if(x>60)
	{
		printf("C");
	}
	else if(x>50)
	{
		printf("D");
	}
	else
		printf("F");
		
	return 0;
}
