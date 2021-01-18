#include<stdio.h>
int main()
{
	int i;
	int number;
	int highest = 0;
	int lowest = 999999;
	for(i = 0;i < 8; i++)
	{
		scanf("%d",&number);
		if(number>0 && number>highest)
		   	highest = number;
		if(number>0 && number<lowest)
		   	lowest = number;
	}
	printf("%d\n",highest);
	printf("%d",lowest);
	return 0;
}
