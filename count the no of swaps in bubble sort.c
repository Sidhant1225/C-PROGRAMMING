#include<stdio.h>
int main()
{
int a[100],i,j,n,ctr=0,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
ctr++;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("%d",ctr);
}
