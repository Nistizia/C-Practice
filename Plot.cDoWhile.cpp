#include<stdio.h>
int main(void)
{
	int i=1;
	int j=1;
	int num;
	printf("Enter an integer -> ");
	scanf("%d",&num);
	do
	{	
		j=1;
		do
		{   
			if(j <= i)
			{
				printf("*");
			}
			j++;
		}while(j <= num);
	   	printf("\n");
	    i++;
	}while(i <= num);
	
	i=1;
	do
	{	
		j=1;
		do
		{   
			if( i+j < num+1)
			{
				printf(" ");
			}
			else
				printf("*");
			j++;
		}while( j <= num );
	   	printf("\n");
	    i++;
	}while(i <= num);
	return 0;
}

