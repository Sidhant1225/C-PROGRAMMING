#include<stdio.h>
int main()
{
int a[5]={5,4,3,2,1},n=5,i,j,temp;
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
