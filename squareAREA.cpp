#include<stdio.h>
int main()
{
	float w,h;
	scanf("%f",&w);
	scanf("%f",&h);
	if(w<=0 && h>0)
	{
		printf("ERROR width");
	}
	else if(h<=0 && w>0)
	{
		printf("ERROR height");
	}
	else if(w<=0 && h<=0)
	{
		printf("ERROR width and height");
	}
	else if(w>0 && h>0)
	{
		printf("Area=%.2f",w*h);
	}
	return 0;
	
}
