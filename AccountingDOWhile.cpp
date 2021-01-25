#include<stdio.h>
int main()
{
	int type;
	int num;
	int income=0;
	int expense=0;
	int countin=0;
	int countex=0;
	do{
		scanf("%d",&type);
		if(type == 1)
		{   scanf("%d",&num);
			income= income + num;
			countin = countin +1;
		}
		if(type == 2)
		{
			scanf("%d",&num);
			expense = expense + num;
			countex = countex + 1;
		}
		
	}while(type != 0);
	printf("%d %d \n",countin,countex);
	printf("%d %d %d",income,expense,income-expense);
	return 0;
	
}
