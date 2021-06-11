#include<stdio.h>
int main()
{
int a[50][50],i,j,k,n;
scanf("%d",&n);

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(k=0;k<n;k++)
{
printf(" %d ",a[n/2][k]);
}
for(k=0;k<n;k++)
{
printf(" %d ",a[k][n/2]);
}
}
