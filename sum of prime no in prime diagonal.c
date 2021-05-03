#include<stdio.h>
int main()
{
int a[50][50],i,j,k,sum=0;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(k=2;k<a[i][j]/2;k++)
{
if(i==j && a[i][j]%k!=0)
{
sum=sum+a[i][j];
}
}
}
}
printf("%d",sum);
}
