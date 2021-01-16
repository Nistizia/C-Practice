#include<stdio.h>
int main()
{
	int i;
	int number;
	int x=0;
	int y=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&number);
		if(number%2==0)
		{
		    x=x+1	;
		}
		else 
		{
			y=y+1;
		}
	}
	if(x>y)
	{
		printf("Even");
	}
	else if (x<y)
	{
		printf("Odd");
	}
	else 
	{
		printf("Equal");
	}
	return 0;
	
}
