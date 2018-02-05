#include <stdio.h>
int main()
{
	int n,f=1,s=1,i,t;
	printf("enter LIMIT");
	scanf("%d",&n);
	for(i=0;i<n-2;i++)
	{
t=f+s;
f=s;
s=t;
	}

	return 0;
}
