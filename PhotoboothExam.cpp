#include<stdio.h>
int main()
{
	//char x[30];
	int cont=1;
	int choice,numphoto,price,pay,moneyleft,i;
	int startphoto();
	void printreceipt(char x[30],int price,int pay,int moneyleft);
	while(cont==1)
	{
	//	printf("Welcome to Photobooth \n What's your name? \n");
	//	scanf("%[^\n]", x);
		price = startphoto();
		do
		{
			printf("Please Enter Your money : ");
			scanf("%d",&pay);
			if(pay>=price)
			{
					moneyleft = pay - price;
					break;	
			}
			else
				printf("Not enough money \nPlease add money\n");	
		}while(pay<price);
		
		printreceipt( x[],price,pay,moneyleft);
		printf("\nDo you want to take another photo?(Yes=1)->");
		scanf("%d",&cont);
	}
	return 0;
}
int startphoto()
{
	char Numberphoto(char x[])
	price = Calprice(numphoto);
	
	return price;
}
void printreceipt(char x[],int price,int pay,int moneyleft)
{
	printf("\n\n     PHOTOBOOTH RECIEPT\n");
	for(int i=1;i<=30;i++)
	{
		printf("-");
	}
//	printf("\nName Customer : %s\n",x);
	printf("Total : %d\n",price);
	printf("Cash : %d \n",pay);
	printf("Change : %d\n",moneyleft);
	for(int i=1;i<=30;i++)
	{
		printf("-");
	}
	printf("\n        Thank you\n      Have a nice day!\n\n");
	
}
char Numberphoto(char x[])
{
	do
	{
		printf("Number of Photo : ");
		scanf("%d",&numphoto);
		if(numphoto < 0 || numphoto > 10)
			printf("Please enter number in range 1-10\n");
	}while(numphoto< 0 || numphoto > 10);
	return x;
}
int Calprice(int numphoto)
{
		int choice,total;
		printf("\nFile Menu\n");
		printf("1. Monochrome film   50 baht\n");
		printf("2. Color film       100 baht\n");
		printf("3. Mixed film       150 baht\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : total = 50*numphoto;
					 return total;
			case 2 : total = 100*numphoto;
					 return total;
			case 3 : total = 150*numphoto;
					 return total;
		}
}
