#include<stdio.h>
int main()
{
	int i;
	int type;
	int number;
	int countin = 0;
	int countex = 0;
	int income = 0;
	int expense = 0;
	for(i = 0; 1 < 2; i++)
	{
		scanf("%d",&type);
		if(type == 0)
		{
			break;
		}	
		scanf("%d",&number);
		if(type == 1)
		{
			countin=countin+1;	
			income=number+income;
		}
		if(type==2)
		{
			countex=countex+1;
			expense=number+expense;
		}		
	}
		printf("%d %d\n",countin,countex);	
		printf("%d %d %d",income,expense,income-expense);
	return 0;
}
