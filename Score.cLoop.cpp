#include<stdio.h>
int main(void)
{
	int Full,i,stu;
	float score;
	int ans=1;
	float max=0;
	float min=10000;
	float total=0;
	float avg=0;
	while(ans!=0)
	{	printf("Full score = ");
		scanf("%d",&Full);
		printf("Number of Students = ");
		scanf("%d",&stu);
		max=0;
		min=10000;
		avg=0;
		total=0;
		for(i=1;i<=stu;i++)
		{
			printf("Student #%d : Score = ",i);
			scanf("%f",&score);
			if(score>max)
			{
				max=score;
			}
			if(score<min)
			{
				min=score;
			}
			total = total + score;
		}
			 avg = total / stu;
			 printf("Full Score = %d\n",Full);
			 printf("Max Score = %.1f\n",max);
			 printf("Min Score = %.1f\n",min);
			 printf("Average Score = %.1f\n",avg);
			 printf("Do you want to continue? (Yes=1) -> ");
			 scanf("%d",&ans);
	}
	printf("Exit the Program. Thank you");
	return 0;
}
