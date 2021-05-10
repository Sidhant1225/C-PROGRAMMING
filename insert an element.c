#include<stdio.h>
int main()
{
int a[100],n,pos,val,i;

scanf("%d",&n);
printf("enter the position");
scanf("%d",&pos);
printf("enter value for that position");
scanf("%d",&val);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=n-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=val;

for(i=0;i<=n;i++)
{
printf("%d ",a[i]);
}
}
