#include<stdio.h>
int main()
{
	float score[100];
	int numstu;
	int i,ans;
	int sumscore=0;
	float sumdif=0;
	float pow=0;
	float total=0;
	float var,mean;
	do
	{
		do
		{
			printf("Number of students = ");
			scanf("%d",&numstu);
			if(numstu>100 || numstu<1)
				printf("Please Enter Number of Students from 1-100!!\n");
		}while(numstu>100);
	
	for(i=0;i<numstu;i++)
	{
		printf("Score of student #%d = ",i+1);
		scanf("%f",&score[i]);	
		if(score[i]<0)
		{
			printf("We do not have minus score!!\n");
			i--;
		}
		else
			sumscore = sumscore +score[i];
	}
	printf("Score of %d Students are \n",numstu);
	for(i=0;i<numstu;i++)
	{
		printf("%.2f ",score[i]);
		if((i+1)%5==0)
			printf("\n");
	}
	mean = (float)sumscore/numstu;
	printf("\nMean score = %.3f\n",mean);
	for(i=0;i<numstu;i++)
	{
		sumdif=score[i]-mean;
		pow=sumdif*sumdif;
		total = total+pow;
	}
	var = total/numstu;
	printf("Variance = %.3f\n",var);
	printf("Do you want to continue? (Yes = 1) -> ");
	scanf("%d",&ans);
	}while(ans == 1);
	printf("Thank you!");
	return 0;
}
