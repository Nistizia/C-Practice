#include<stdio.h>
int main()
{
	int num;
	int sumeven=0;
	int sumodd=0;
	int ans;
	do
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			sumeven = sumeven + num;
		}
		else
		{
			sumodd = sumodd + num;
		}
	}while(num!=0);
	if(sumeven>sumodd)
		ans = sumeven - sumodd;
	else
		ans = sumodd - sumeven;
	printf("%d",ans);
	return 0;
}
