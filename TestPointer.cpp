#include<stdio.h>
int main()
{
	int a,*b;
	scanf("%d",&a);
	b = &a;
	printf("\n");
	printf("%d",*b);
}
