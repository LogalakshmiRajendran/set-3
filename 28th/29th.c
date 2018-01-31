#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the minute");
    scanf("%d",&c);
    a=c/60;
    b=c%60;
    printf("hour%d minute%d",a,b);
    
}
