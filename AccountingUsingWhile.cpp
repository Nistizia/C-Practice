#include<stdio.h>
int main()
{
	int income=0;
	int expense=0;
	int type=1;
	int num;
	int countin=0;
	int countex=0;
	while(type != 0)
	{
		scanf("%d",&type);
		if(type == 1)
		{
			scanf("%d",&num);
			income = num + income;
			countin=countin + 1;
		}
		if(type == 2)
		{
			scanf("%d",&num);
			expense = num + expense;
			countex=countex + 1;
		}
	}
	printf("%d %d\n",countin,countex);
	printf("%d %d %d",income,expense,income-expense);
	return 0;
}
