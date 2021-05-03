#include<stdio.h>
int main()
{
int a[50][50],n,m,i,j,sum=0;
printf("enter value of n and m");
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
if(i==0 || i==n-1)
{
for(j=0;j<m;j++)
{
if(j==0 || j==m-1)
{
sum=sum+a[i][j];
}
}
}
}
printf("sum of corner elements is : %d",sum);
}
