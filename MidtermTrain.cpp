#include<stdio.h>
int main()
{
	int money,sta,fee,left;
	int ans=1;
	do{
		printf("Money in Card = ");
		scanf("%d",&money);
		printf("Number of stations = ");
		scanf("%d",&sta);
		fee = 20+(15*(sta-1));
		printf("Fee = %d\n ",fee);
		if(money>fee)
		{
			left = money - fee;
			printf("Moneyleft = %d\n ",left);
		}
		else 
			printf("Not Enough money!!\n");
	
		printf("Do you want to continue? (Yes=1,No=0)->");
		scanf("%d",&ans);
	}while(ans==1);
		printf("Thank you");
	return 0;

}
