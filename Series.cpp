#include<stdio.h>
#include<math.h>
int main()
{
	int N,M ;
	int m = 0 ;
	int n = 0 ;
	int ans = 0 ;
	int power = 0;
	scanf("%d",&M);
	scanf("%d",&N);
	for(int i = 1 ; i <= M ; i = i+2)
	{	
		m = m +(i * pow(-1,power)) ;
		power++;
	}
	for (int j = 1; j <= N ; j = j*2)
	{
		n = n + (j * pow(-1,power));
		power++;
	}
	ans = m * n;
	printf("the sum is %d ",ans);
	return 0;
}
