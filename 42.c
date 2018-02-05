#include <stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	int n,m;
	printf("\n enter the two strings");
	scanf("%s %s",&a,&b);
	n=strlen(a);
	m=strlen(b);
	if(n>=m)
	{
		printf("\n %s",a);
	}
	else
	{
	printf("\n %s",b);
	}
}
