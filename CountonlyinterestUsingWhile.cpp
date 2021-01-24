#include<stdio.h>
int main()
{
	int x;
	int y;
	int i=0;
	int num;
	int count=0;
	scanf("%d",&x);
	scanf("%d",&y);
	while(i<8)
	{
		scanf("%d",&num);
		if(num>x && num<y)
		{
			count = count + 1;
		}
		i++;
	}
	if(count==0)
		printf("None");
	else
	    printf("%d",count);
	return 0;
}
