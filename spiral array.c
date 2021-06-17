#include<stdio.h>
int main()
{
int n,a[100][100],i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
if(n%2==0)
{
while(i==n/2 && j==(n/2)-1)
{
for(j=0;j<n;j++)
{
printf("%d ",a[0][j]);
}
for(i=1;i<n;i++)
{
printf("%d ",a[i][n-1]);
}
for(j=n-2;j>=0;j--)
{
printf("%d ",a[n-1][j]);
}
for(i=n-2;i>=1;i--)
{
printf("%d ",a[i][0]);
}
for(j=1;j<=n-2;j++)
{
printf("%d ",a[1][j]);
}
for(i=2;i<=n-2;i++)
{
printf("%d ",a[i][n-2]);
}
for(j=n-3;j>=1;j--)
{
printf("%d ",a[n-2][j]);
}
}
}
