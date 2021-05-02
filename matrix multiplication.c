#include<stdio.h>
int main()
{
int a[50][50],b[50][50],c[50][50],i,j,k;

for(i=0;i<2;i++)
{
for(k=0;k<3;k++)
{
scanf("%d",&a[i][k]);
}
}
for(k=0;k<3;k++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[k][j]);
}
}

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=0;

for(k=0;k<3;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
}
