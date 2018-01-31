#include<stdio.h>
int main()
{
    int b,i,a[50];
    printf("array size:");
    scanf("%d",&b );
    printf("enter array numbers:");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        printf("the number and its position is %d\t%d\n",a[i],i);
    }
    return 0;
}
