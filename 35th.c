#include<stdio.h>
#include<string.h.
int main()
{
char str[200];
int i,count;
printf("\n Enter the string");
gets("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0'&&str[i]<='9')
{
count++;
}
}
printf("\n The numeric value is %d",count);
return o;
}
