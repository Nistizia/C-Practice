#include <stdio.h>
int main(void) 
{
  int i;
  int station;
  int money;
  int fee;
  int moneyleft;
  int ans;
  for(i=0;1;i++)
  {
  	printf("Money in card = ");
  	scanf("%d",&money);
  	printf("Number of Stations = ");
  	scanf("%d",&station);
  	fee = ((station-(station-1))*20)+((station-1)*15);
  	moneyleft = money-fee;
  	if(money>fee)
  	{
     printf("Fee = %d\n",fee);
     printf("Money Left = %d\n",moneyleft);
  	}
  	if(money<fee)
  	{
  	printf("Fee = %d\n",fee);
    printf("Not enough money!\n");
  	}
  	printf("Do you want to continue?");
  	scanf("%d",&ans);
  	if(ans==0)
    	break;
  }
  printf("Thank you");
  
  return 0;
}
