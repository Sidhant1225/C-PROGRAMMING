#include<stdio.h>
int main()
{
int a[100],i,j,n,ctr=0,temp,c=0,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
     ctr++;

for(j=0;j<n-i-1;j++)
{


if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
c=0;
for(k=0;k<n-1;k++)
{
    if(a[k]<a[k+1])
        c++;
}
if(c==n-1)
    break;
}
if(c==n-1)
    break;
}
printf("%d",ctr);
}
