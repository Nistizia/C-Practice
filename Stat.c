#include<stdio.h>
int main(void)
{
	int score[100];
	int ans=1;
	int numstu,i;
	float sumscore=0;
	float avg=0;
	float v,x,var;
	float sumv=0;
	do
	{
		sumscore = 0;
		sumv = 0;
		printf("Number of students = ");
		scanf("%d",&numstu);
		for(i=0;i<numstu;i++)
		{
			printf("Score of student #%d = ",i+1);
			scanf("%d",&score[i]);
			sumscore = sumscore + score[i];
		}
		avg= sumscore/numstu;
		printf("Mean Score = %.2f\n",avg);
		
		for(i=0;i<numstu;i++)
		{
			x=score[i]-avg;
			v=x*x;
			sumv=sumv+v;
		}
		var = sumv/numstu;
		printf("Variance = %.2f\n",var);
		printf("Do you want to continue?(Yes = 1) -> ");
		scanf("%d",&ans);
			
	}while(ans==1);
	printf("Thank you!");
	return 0;
}
