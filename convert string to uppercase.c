#include<stdio.h>
int main()
{
char a[20];
int i;
printf("\nenter any string ");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>=97 && a[i]<=122)
{
a[i]=a[i]-32;
}
}
printf("%s",a);
}
