#include<stdio.h>
int main()
{
	void displayName(char *);
	int inputNumOfPhoto();
	int calculatePrice(int);
	int inputCash(int);
	int calculateChange(int, int);
	void displayReceipt(char *, int, int);
	
	char name[31];
	char *ptrName;
	int cont = 1;
	int nPhoto;
	int price;
	int pay;
	while(cont == 1)
	{
		printf("Welcome to Photobooth \nEnter your name: ");
		scanf(" %[^\n]", name);
		ptrName = name;
		
		nPhoto = inputNumOfPhoto();
		price = calculatePrice(nPhoto);
		pay = inputCash(price); 
	
		displayReceipt(ptrName, pay, price);
		
		printf("\nDo you want to take another photo? (Yes = 1) -> ");
		scanf("%d", &cont);
	}
	
	return 0;
}

void displayName(char *ptr)
{
	printf("\nName Customer: ");
	while(*ptr != '\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
}

int inputNumOfPhoto()
{
	int num;
	do
	{
		printf("Number of Photo : ");
		scanf("%d",&num);
		if(num <= 0 || num > 10)
			printf("Please enter number in range 1-10\n");
	}while(num <= 0 || num > 10);
	return num;
}

int calculatePrice(int numOfPhoto)
{
	int price, choice;
	printf("\nFile Menu\n");
	printf("1. Monochrome film (50 baht/photo)\n");
	printf("2. Color film (100 baht/photo)\n");
	printf("3. Mixed film (150 baht/photo) \n");
	do
	{
		printf("Enter your choice : ");
		scanf("%d", &choice);
		if(choice < 1 || choice > 3)
			printf("Please Enter choice from 1-3\n");
	}while(choice < 1 || choice > 3);

	switch(choice)
	{
		case 1 : price = 50 * numOfPhoto;
				 return price;
		case 2 : price = 100 * numOfPhoto;
			     return price;
		case 3 : price = 150 * numOfPhoto;
			     return price;
	}
}

int inputCash(int price)
{
	int pay;
	do
	{
		printf("Please Enter Your money : ");
		scanf("%d",&pay);
		if(pay >= price)
		{
			return pay;	
		}
		else
			printf("Not enough money \nPlease add money\n");	
	}while(pay<price);
}

int calculateChange(int cash, int price)
{
	int change = cash - price;
	return change;
}

void displayReceipt(char *ptrName, int pay, int price)
{
	printf("\n\n     PHOTOBOOTH RECIEPT\n");
	for(int i = 1; i <= 30; i++)
	{
		printf("-");
	}
	displayName(ptrName);
	printf("\nTotal : %d", price);
	printf("\nCash : %d", pay);
	printf("\nChange : %d\n", calculateChange(pay, price));
	for(int i = 1; i <= 30; i++)
	{
		printf("-");
	}
	printf("\n        Thank you\n      Have a nice day!\n\n");
}
