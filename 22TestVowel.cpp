#include<stdio.h>
#include<string.h>
int main()
{
	char A[100];
	int i;
	scanf("%s",&A);
	for( i = 0; i <= strlen(A) ; i++)
	{    
		if(A[i] == 65 || A[i] == 97)
		{
			printf("%c",A[i]);
		}
		else if(A[i] == 69 || A[i] == 101)
		{ 
			printf("%c",A[i]);
		}
		else if(A[i] == 73 || A[i] == 105)
		{
			printf("%c",A[i]);
		}
		else if(A[i] == 79 || A[i] == 111)
		{
			printf("%c",A[i]);
		}
		else if(A[i] == 85 || A[i] == 117)
		{
			printf("%c",A[i]);
		}
		
	}
	return 0;
}
