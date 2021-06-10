#include<stdio.h>
#include<string.h>
int main()
{
	int x[50];
	int y[50];
	int sumx = 0;
	int sumy = 0;
	int xy=0;
	float meanx;
	float meany;
	int i,j,k;
	float difx[50];
	float dify[50];
	int n;
	printf("Enter Number of point =");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter X :");
		scanf("%d",&x[i]);
		printf("Enter Y :");
		scanf("%d",&y[i]);
		
	}
	for(i=0;i<n;i++)
	{
		sumx=sumx+x[i];	
	}
	meanx=sumx/n;
	printf("sumx = %d meanx =  %d\n",sumx, meanx);
	
	for(i=0;i<n;i++)
	{
		sumy=sumy+y[i];	
	}
	meany=sumx/n;
	printf("sumy = %d meany =  %d\n",sumy, meany);
	
	for(i=0;i<n;i++)
	{
		xy=x[i]*y[i];	
	}
	printf("xy = %d",xy);
	
	for(i=0;i<n;i++)
	{
		difx[i]=x[i]-meanx;
		dify[i]=y[i]-meany;
	}
	
	return 0;
}



