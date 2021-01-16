#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
    scanf("%d",&y);
	if(x>0 && y>0)
	{
	printf(" x and y are more than 0");
	}
	if(x>0 && y<0)
	{
	printf("x more than 0");
	}
	if(x<0 && y>0 )
	{
	printf("y more than 0");
	}
	if(y<0 && x<0)
	{
	printf("ERROR");
	}
	return 0;
}
