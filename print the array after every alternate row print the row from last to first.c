#include<stdio.h>
int main()
{
int a[100][100],i,j,n,k;
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
if(i%2!=0)
{
for(k=n-1;k>=0;k++)
{
printf("%d ",a[i][k]);
}
}
else
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
}
}
}

