#include<stdio.h>
int main()
{
	int i;
	int x;
	int y;
	int number;
	int count=0;
	scanf("%d",&x);
	scanf("%d",&y);
	for(i=0;i<8;i++)
	{
		scanf("%d",&number);
		if(number>x && number<y)
			count= count + 1;
	}
	if(count==0)
		printf("None");
	else
	    printf("%d",count);
	return 0;
}
