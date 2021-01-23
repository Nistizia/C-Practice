#include<stdio.h>
int main()
{
	int i = 0;
	int num;
	int even = 0;
	int odd = 0;
	while(i < 8)
	{
		scanf("%d",&num);
		if(num % 2 == 0)
		{
			even = num + even;
		}
		if(num % 2 != 0)
		{
			odd = num + odd;
		}
		i++;
	}
	if( even < odd )
	{
		printf("Odd\n");
	}
	else if(even>odd)
	{
		printf("Even\n");
	}
	else 
		printf("Equal\n");
	printf("%d\n",even);		
	printf("%d\n",odd);
	return 0;
}

