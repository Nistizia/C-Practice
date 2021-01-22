#include<stdio.h>
int main()
{
	int num;
	int high = 0;
	int low = 999999;
	int i = 0;
	while(i<8)
	{
		i++;
		scanf("%d",&num);
		if(num > high)
		{
			high = num;
		}
		if(num < low && num > 0)
		{
			low = num;
		}
	}
	printf("Highest Number = %d\n",high);
	printf("Lowest Number = %d",low);
	
}
