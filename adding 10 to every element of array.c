#include<stdio.h>
int main()
{
int a[100],i,j;
for(i=1;i<5;i++)
{
scanf("%d ",& a[i]);
a[i]=a[i]+10;
}
printf("elements are ");
for(i=0;i<5;i++)
{
printf("%d ",a[i]);
}
}

