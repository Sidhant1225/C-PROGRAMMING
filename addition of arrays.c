#include<stdio.h>
int main()
{
int a[50][50]={{10,20},{30,40}},b[50][50]={{2,3},{4,5}},c[50][50],i,j;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d ",c[i][j]);
}
}
}
