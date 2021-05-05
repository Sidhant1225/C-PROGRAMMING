#include<stdio.h>
int main()
{
int a[100]={10,20,30},b[100]={4,5,6},c[100],i;
for(i=0;i<3;i++)
{
c[i]=a[i]+b[i];
}
for(i=0;i<3;i++)
{
printf("%d ",c[i]);
}
}
