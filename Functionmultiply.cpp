#include<stdio.h>
int multiply(int x,int y)
{
	int z=x*y;
	return z;
}
int main()
{
	int z,x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("%d",multiply(x,y));
}
