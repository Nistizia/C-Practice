#include<stdio.h>
#include<string.h>
int main()
{
	char A[100];
	int count=0;
	int i;
	scanf("%s",A);
	for(i=0;i<strlen(A);i++)
	{
		if(A[i]=='A')
			count++;
		else if(A[i]=='E')
			count++;
		else if(A[i]=='I')
			count++;
		else if(A[i]=='O')
			count++;
		else if(A[i]=='U')
			count++;
	}
	printf("%d",count);
	return 0;
}
