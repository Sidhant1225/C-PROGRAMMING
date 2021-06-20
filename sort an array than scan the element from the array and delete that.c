#include<stdio.h>
int main()
{
int a[100],i,j,temp,n,m,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
scanf("%d",&m);
for(i=0;i<n;i++)
{
    if(a[i]==m)
    {
 for(j=i+1;j<n;j++)
 {
     if(a[i] < a[j])
   t=a[i];
   a[i]=a[j];
   a[j]=t;
 }
    }
}
for(i=0;i<n-1;i++)
{
 printf("%d ",a[i]);
}
}
