#include<stdio.h>
int main()
{
	int num;
	int i = 0;
	printf("Enter Value = ");
	scanf("%d",&num);
	while(num !=0 )
	{
		i= i+1 ;
		printf("Enter Value = ");
		scanf("%d",&num);
	}	
	printf("%d",i);
}
