#include<stdio.h>
int ReadNstudent()
{
	int x;
	do
	{
		printf("Number of students = ");
		scanf("%d",&x);
		if(x>100 || x<1)
			printf("Please Enter Number of Students from 1-100!!\n");
		}while(x>100 || x<1);
	return x;
}
void ReadScore(float a[],int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		printf("Score of student %d = ",i+1);
		scanf("%f",&a[i]);	
		if(a[i]<0)
		{
			printf("We do not have minus score!!\n");
			i--;
		}
		if(a[i]>100)
		{
			printf("Score must not more than 100!!\n");
			i--;
		}
	}
}
float FindMean(float a[],int x)
{
	float sum=0;
	int i;
	for(i=0;i<x;i++)
	{
		 sum = sum +a[i];
	}
	float z = sum/x;
	return z;
}
float FindVariance(float a[],float mean,int x)
{
	float sumdif =0 ;
	float pow = 0;
	float total = 0;
	float vari;
	for(int i=0;i<x;i++)
	{
		sumdif=a[i]-mean;
		pow=sumdif*sumdif;
		total = total+pow;
	}
	vari = total/x;
	return vari;
}
void DisplayStat(float a[],int x)
{
	int i;
	float mean,var;
	printf("Score of %d Students are \n",x);
	for(i=0;i<x;i++)
	{
		printf("%.2f ",a[i]);
		if((i+1)%5==0)
			printf("\n");
	}
	mean = FindMean(a,x);
	printf("\nMean score = %.3f\n",mean);
	var = FindVariance(a,mean,x);
	printf("Variance = %.3f\n",var);
}
int main()
{
	int numstu;
	int i,ans;
	float score[100];
	do
	{
		numstu = ReadNstudent();
		ReadScore(score,numstu);
		DisplayStat(score,numstu);
		
		printf("Do you want to continue? (Yes = 1) -> ");
		scanf("%d",&ans);
	}while(ans==1);
	printf("Thank you for using program");
	return 0;
}
