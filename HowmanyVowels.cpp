#include<stdio.h>
#include<string.h>
int main()
{
	char V[100];
	int i;
	int count=0;
	scanf("%s",V);
	for(i=0;i<strlen(V);i++)
	{
		if(V[i]=='A'||V[i]=='a')
			count++;
		else if(V[i]=='E'||V[i]=='e')
			count++;
		else if(V[i]=='I'||V[i]=='i')
			count++;
		else if(V[i]=='O'||V[i]=='o')
			count++;
		else if(V[i]=='U'||V[i]=='u')
			count++;
	}
	printf("%d",count);
	return 0;
}
