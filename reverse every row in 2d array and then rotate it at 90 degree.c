#include<stdio.h>
int main()
{
int a[100][100],i,j,n,k,b[100][100],temp;
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
k=0;
for(j=n-1;j>=0;j--)
{
b[i][k]=a[i][j];
k++;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}



}
