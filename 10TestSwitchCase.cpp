#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	switch (z)
	{
		case 1 : printf("%d",x+y);
					break;
		case 2 : printf("%d",x-y);
					break;
		case 3 : printf("%d",x*y);
					break;
		case 4 : printf("%d",x/y);
					break;
	}
	return 0;
}
