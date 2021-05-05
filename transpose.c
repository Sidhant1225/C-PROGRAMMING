#include<stdio.h>
int main()
{
int a[50][50]={{10,20,30},{40,50,60}},b[50][50],i,j;

for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
b[j][i]=a[i][j];
printf("%d ",b[j][i]);
}
}
}
