#include<stdio.h>
int main()
{
int i,w,count=0;
char a[200];
printf("\n enter the sentence:");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count++;
w=count+1;
}
}
printf("\n no. of words: %d",w);
return 0;
}
