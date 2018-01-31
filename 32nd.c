#include<stdio.h>
#include<string.h>
void main()
{
char s[200];
int count=0,j;
printf("enter the string \n");
scanf("%d[^\n]s",s);
for(j=0;s[j]!='\';j++)
{
if(s[j]=='')
count++;
}
printf("no of words in given string are:%d \n",count++j);
}
