#include<stdio.h>
int main()
{
	int num,r;
	scanf("%d",&num);
	r=num%2;
	switch(r)
	{
		case 0 : printf("Even");
				 break;
		case 1 : printf("Odd");
				 break;
		case -1 :printf("Odd");
				 break;
	}
	return 0;
}
