#include<stdio.h>
int main(void)
{
	int sub,credit,point,i;
	float sumcre = 0 ;
	float sumpoint = 0;
	float score,avg;
	char grade;
	printf("Number of subjects = ");
	scanf("%d",&sub);
	for(i=1;i<=sub;i++)
	{
		printf("Subject #%d \n",i);
		printf("Credit = ");
		scanf("%d",&credit);
		printf("Score = ");
		scanf("%f",&score);
		if(score>=80)
		{
			grade = 'A';
		}
		else if(score>=70)
		{
			grade = 'B';
		}
		else if(score>=60)
		{
			grade = 'C';
		}
		else if(score>=50)
		{
			grade = 'D';
		}
		else
			grade = 'F';
			
		printf("Grade = %c  ",grade);
		switch(grade)
		{
			case 'A': point = credit*4;
					 printf("Point = %d x 4 = %d",credit,point);
				     break;
			case 'B': point = credit*3;
					 printf("Point = %d x 3 = %d",credit,point);
				     break;
			case 'C': point = credit*2;
					 printf("Point = %d x 2 = %d",credit,point);
				     break;
			case 'D': point = credit*1;
					 printf("Point = %d x 1 = %d",credit,point);
				     break;
			case 'F': point = credit*0;
					 printf("Point = %d x 0 = %d",credit,point);
				     break;
		}
		printf("\n");
		sumcre = sumcre + credit;
		sumpoint = sumpoint + point;
	}
	avg = sumpoint / sumcre;
	printf("Grade Point Average = %.2f",avg);
	return 0;
}
