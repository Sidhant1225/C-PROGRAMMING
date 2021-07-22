#include<stdio.h>
int main()
{
int a[5]={5,4,3,2,1};
int i,j,min,temp,n=5;
for(i=0;i<n-1;i++)
{
min=a[i];

for(j=i+1;j<n;j++)
{
if(a[j]<min)
{
temp=a[j];
a[j]=min;
min=temp;
}
}
a[i]=min;
}
printf("sorted array is ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
