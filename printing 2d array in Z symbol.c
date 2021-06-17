#include<stdio.h>
int main()
{
int a[100][100],i,j,n;
scanf("%d",&n);

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(j=0;j<n-1;j++)
{
printf("%d ",a[0][j]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i+j==n-1)
{
printf("%d ",a[i][j]);
}
}
}
for(j=1;j<n;j++)
{
printf("%d ",a[n-1][j]);
}
}
