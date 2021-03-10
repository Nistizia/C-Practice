#include<stdio.h>
int ReadAmount()
{
	int x;
	printf("Money in Card = ");
	scanf("%d",&x);
	return x;
}
int ReadStation()
{
	int x;
	printf("Number of Stations = ");
	scanf("%d",&x);
	return x;
}
int CalcFee(int x)
{
	int value = 15 +(10*(x-1));
	return value;
}
void DisplayResult(int fee,int money)
{
	printf("Fee = %d\n",fee);
	if(money>=fee)
	{
		int moneyleft = money - fee;	
		printf("Money Left = %d\n",moneyleft);
	}
	else
		printf("Not Enough Money!!");
	
}
int main()
{
	int money,station;
	int moneyleft,fee;
	int ans=1;
	do
	{
		money = ReadAmount();
		station = ReadStation();
		fee = CalcFee(station);
		DisplayResult(fee,money);
		printf("Do you want to continue?(yes=1) -> ");
		scanf("%d",&ans);
	}while(ans==1);
	printf("Thank you");
	return 0;
}

