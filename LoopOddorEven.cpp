#include<stdio.h>
int main()
{
	int i;
	int number;
	int SumEven = 0;
	int SumOdd = 0;
	for(i = 0; i < 8; i++)
	{
		scanf("%d",&number);
		if( number % 2 == 0)
			SumEven = number + SumEven;
		else
			SumOdd = number + SumOdd;
	}
	if ( SumOdd > SumEven )
		printf("Odd\n");
	if( SumOdd < SumEven )
		printf("Even\n");
	else if( SumOdd == SumEven )
		printf("Equal\n");
		
		printf("%d\n",SumEven);
		printf("%d\n",SumOdd);
	return 0;
}
