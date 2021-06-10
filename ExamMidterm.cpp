#include<stdio.h>
int main()
{
	char x[30];
	int cont=1;
	int choice,numphoto,price,pay,moneyleft,i;

	while(cont==1)
	{
		printf("Welcome to Photobooth \n What's your name? \n");
		scanf("%[^\n]", x);
		do
		{
			printf("Number of Photo : ");
			scanf("%d",&numphoto);
			if(numphoto < 0 || numphoto > 10)
				printf("Please enter number in range 1-10\n");
		}while(numphoto< 0 || numphoto > 10);
		
		printf("\nFile Menu\n");
		printf("1. Monochrome film 50 baht\n");
		printf("2. Color film 100 baht\n");
		printf("3. Mixed film 150 \n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : price = 50*numphoto;
				     break;
			case 2 : price = 100*numphoto;
				     break;
			case 3 : price = 150*numphoto;
				     break;
		}
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
		
		//printreciept
		printf("\n\n     PHOTOBOOTH RECIEPT\n");
		for(i=1;i<=30;i++)
		{
			printf("-");
		}
		printf("\nName Customer : %s\n",x);
		printf("Total : %d\n",price);
		printf("Cash : %d \n",pay);
		printf("Change : %d\n",moneyleft);
		for(i=1;i<=30;i++)
		{
			printf("-");
		}
		printf("\n        Thank you\n      Have a nice day!\n\n");
		
		printf("\nDo you want to take another photo?(Yes=1)->");
		scanf("%d",&cont);
	}

	return 0;
}

