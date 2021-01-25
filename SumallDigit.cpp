#include<stdio.h>
int main()
{
	int num;
	int ones = 0;
	int tens = 0;
	int huns = 0;
	int sum = 0;
	scanf("%d",&num);
	ones = num % 10;
	tens = ((num % 100)-ones)/10;
	huns = (num - tens - ones)/100;
	sum = ones+tens+huns;
	printf("%d",sum);
}
