#include<stdio.h>
int main()
{
int a[100][100],i,j,temp,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
temp=a[i][j];
a[i][j]=a[i][(n-1)-i];
a[i][(n-1)-i]=temp;
}
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
}
