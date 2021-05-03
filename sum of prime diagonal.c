#include<stdio.h>
int main()
{
int a[50][50],i,j,sum=0;

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
if(i==j)
{
sum=sum+a[i][j];
}
}
}
printf("sum is : %d",sum);
}
