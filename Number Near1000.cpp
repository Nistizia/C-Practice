#include<stdio.h>
int main(void)
{
	int i,k;
	int difi,difk;
	scanf("%d",&k);
	scanf("%d",&i);
	difk=1000-k;
	difi=i-1000;
	if(difi<difk)
	{
		printf("%d",i);
	}
	else if(difk<difi)
	{
		printf("%d",k);
	}
	else if(difi==difk)
	{
		printf("=");
	}
	
	
	return 0;
}
