#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int press,i;
	int ans = 1;
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&press);
	switch(press)
	{
		case 1 :ans=num1+num2;
				printf("%d",ans);
			 	break;
		case 2 :ans = num1-num2;
				printf("%d",ans);
				break;
		case 3 :ans = num1 * num2;
				printf("%d",ans);
				break;
		case 4 :ans = num1/num2;
				printf("%d",ans);
				break;
		case 5 :ans = num1%num2;
				printf("%d",ans);
				break;
		case 6 : for(i = 1;i <= num2;i++)
				{
					ans=num1*ans;
				}
				printf("%d",ans);
				break;
	}
	return 0;
}
