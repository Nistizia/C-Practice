#include<stdio.h>
int main()
{
	float x;
	float y;
	float z;
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	if(z==0)
	{
		printf("ERROR");
	}
	else 
	{
		printf("%.6f",(x+y)/z);
	}
 	
	return 0;
	
}
