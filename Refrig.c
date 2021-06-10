#include<stdio.h>
int main()
{
	int pro,cont;
	float price,discount,net,interest,netin,monthpay;
	do
	{
		printf("Refridgerator Price = ");
		scanf("%f",&price);
		if(price>50000)
		{
			discount = (price*10)/100;
			printf("Discount = %.2f\n",discount);
			net = price - discount;
			printf("Net price = %.2f\n",net);
		}
		else if(price>30000)
		{
			discount = (price*5)/100;
			printf("Discount = %.2f\n",discount);
			net = price - discount;
			printf("Net price = %.2f\n",net);
		}
		else
		{
			discount = price*0;
			printf("Discount = %.2f\n",discount);
			net = price - discount;
			printf("Net price = %.2f\n",net);
		}
		printf("Promotion Number = ");
		scanf("%d",&pro);
		switch(pro)
		{
			case 1 :interest = (net*2)/100;
					printf("Interest = %.2f\n",interest);
					netin = net+interest;
					printf("Net Price with Interest = %.2f\n",netin);
					monthpay = netin/12;
					printf("Monthly Payment = %.2f\n",monthpay);
					break;
			case 2 : interest = (net*3)/100;
					printf("Interest = %.2f\n",interest);
					netin = net+interest;
					printf("Net Price with Interest = %.2f\n",netin);
					monthpay = netin/15;
					printf("Monthly Payment = %.2f\n",monthpay);
					break;
			case 3 : interest = (net*4)/100;
					printf("Interest = %.2f\n",interest);
					netin = net+interest;
					printf("Net Price with Interest = %.2f\n",netin);
					monthpay = netin/18;
					printf("Monthly Payment = %.2f\n",monthpay);
					break;			
		}
		printf("Do you want to continue?(Yes=1)--> ");
		scanf("%d",&cont);
	}while(cont==1);
	printf("\nExit the program");
	return 0;
}
