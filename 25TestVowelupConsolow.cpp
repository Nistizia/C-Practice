#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100];
	int i;
	scanf("%s",&a);
	for(i=0; i<strlen(a); i++)
	{
		if(a[i] == 'a' || a[i] == 'A')
		{
			a[i] = tolower(a[i]);
			printf("%c",a[i]);
		}
		else if(a[i] == 'e' || a[i] == 'E')
		{
			a[i] = tolower(a[i]);
			printf("%c",a[i]);
		}
		else if(a[i] == 'i' || a[i] == 'I')
		{
			a[i]=tolower(a[i]);
			printf("%c",a[i]);
		}
		else if(a[i] == 'o' || a[i] == 'O')
		{
			a[i]=tolower(a[i]);
			printf("%c",a[i]);
		}
		else if(a[i] == 'u' || a[i] == 'U')
		{
			a[i] = tolower(a[i]);
			printf("%c",a[i]);
		}
		else
		{
			a[i] = toupper(a[i]);
			printf("%c",a[i]);	
		}
	}
	return 0;
}
