#include<stdio.h>int main()
{
	int a[50],i,n=0;
	for(i=0;i<5;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	    n=1+a[i];
	   printf("%d",n);
	}
	
	return 0;
}
