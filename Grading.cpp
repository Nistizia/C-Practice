#include<stdio.h>
int main()
{
	float x;
	scanf("%f",&x);
	if(x>=80)
	{
		printf("Excellent");
	}
	else if(x>=40 )
	{
		printf("Pass");
	}
	else if (x<40)
	{ 
	 	printf("Fail");
	}
	return 0;
	
}
