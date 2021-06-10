#include<stdio.h>
int main()
{
	int price,promo,cont;
	float netprice;
	float FindNetprice(int p);
	void Displayinfo(int pro,float np);
	do
	{
		printf("Refridgerator Price = ");
		scanf("%d",&price);
		netprice = FindNetprice(price);
		printf("Promotion Number = ");
		scanf("%d",&promo);
		Displayinfo(promo,netprice);
		printf("Do you want to continue?(Yes=1)--> ");
		scanf("%d",&cont);
	}while(cont==1);
	printf("\nExit the program");
	return 0;
}
float FindNetprice(int p)
{
	float discount,net;
	if(p > 50000)
	{
		discount = (p*10)/100;
		printf("Discount = %.2f\n",discount);
		net = p - discount;
		printf("Net price = %.2f\n",net);
	}
	else if(p > 30000)
	{
		discount = (p*5)/100;
		printf("Discount = %.2f\n",discount);
		net = p - discount;
		printf("Net price = %.2f\n",net);
	}
	else
	{
		discount = p*0;
		printf("Discount = %.2f\n",discount);
		net = p - discount;
		printf("Net price = %.2f\n",net);
	}
	return net;
}
void Displayinfo(int pro,float np)
{
	float interest,netin,monthpay;
	switch(pro)
	{
		case 1 :interest = (np*2)/100;
				printf("Interest = %.2f\n",interest);
				netin = np + interest;
				printf("Net Price with Interest = %.2f\n",netin);
				monthpay = netin/12;
				printf("Monthly Payment = %.2f\n",monthpay);
				break;
		case 2 : interest = (np*3)/100;
				printf("Interest = %.2f\n",interest);
				netin = np+interest;
				printf("Net Price with Interest = %.2f\n",netin);
				monthpay = netin/15;
				printf("Monthly Payment = %.2f\n",monthpay);
				break;
		case 3 : interest = (np*4)/100;
				printf("Interest = %.2f\n",interest);
				netin = np+interest;
				printf("Net Price with Interest = %.2f\n",netin);
				monthpay = netin/18;
				printf("Monthly Payment = %.2f\n",monthpay);
				break;			
	}
}


