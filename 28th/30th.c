#include<stdio.h>
int main()
{
	int h1,h2,mins1,mins2,a,b;
	scanf("%d:%d",&hrs1,&mins1);
	scanf("%d:%d",&hrs2,&mins2);
	a=h1-h2;
	b=mins1-mins2;
	printf("result is %d:%d",a,b);
	return 0;
}
