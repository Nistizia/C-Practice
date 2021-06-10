#include<stdio.h>
void ReadAndCalc(int *,int *, int *);
void DisplayResult(int , int );
int main()
{
	int money,station,fee,ans;
	do
	{
		ReadAndCalc(&money, &station, &fee);
		DisplayResult(fee, money);
		printf("Do you want to continue?(yes=1)->");
		scanf("%d",&ans);
	}while(ans==1);
	printf("Thank you!!");
	return 0;
}
void ReadAndCalc(int *m, int *s,int *f)
{
	printf("Money in Card = ");
	scanf("%d",m);
	printf("Number of Stations = ");
	scanf("%d",s);
	*f=15+(*s-1)*10;
}
void DisplayResult(int x, int y)
{
	printf("Fee = %d\n",x);
	if(x>y)
		printf("Not enough money\n");
	if(x<=y)
		printf("Money Left = %d\n",y-x);
}
