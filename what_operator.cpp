#include<stdio.h>
int main()
{
	int A;
	int B;
	int C;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	if(C==A+B)
	{
		printf("+");
	}
	else if(C==A-B)
	{
		printf("-");
	}
	else if(C==A*B)
	{
		printf("*");
	}
	else if(C==A/B)
	{
		printf("/");
	}
	else if(C==A%B)
	{
		printf("%%");
	}
	return 0;
}
