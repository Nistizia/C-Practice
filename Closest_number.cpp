#include<stdio.h>
int main()
{
	int x,y,i,num;
	int dif;
	int check=1000000;
	scanf("%d",&x);
	for(i=0;i<8;i++)
	{
		scanf("%d",&y);
			if(x>y)
			{
				dif=x-y;
				if(dif<check)
				{
					check=dif;
					num=y;
				}
			}
			if(x<=y)
			{
				dif=y-x;
				if(dif<check)
				{
					check=dif;
					num=y;
				}
			}	
	}
	printf("%d",num);
	return 0;
}
