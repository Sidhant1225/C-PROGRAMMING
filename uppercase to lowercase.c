#include<stdio.h>
int main()
{
char a[20];
int i;
printf("enter any string  ");
gets(a);

for(i=0;a[i]!='\0';i++)
{
if(a[i]>=65 && a[i]<=90)
{
a[i]=a[i]+32;
}
}
printf("lower case string is %s ",a);
}
