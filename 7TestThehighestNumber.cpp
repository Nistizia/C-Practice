#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if(x>y && x>z)
	{
		printf("%d",x);
	}
	if(y>x && y>z)
	{
		printf("%d",y);
	}
	if(z>x && z>y)
	{
		printf("%d",z);
	}
	return 0;
}
