#include<stdio.h>
int main()
{
int a[50]={1,2,3,4,5},b[50]={2,6,7,3,1},c[50],i,j;

for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]==b[j])
{
printf("%d ",a[i]);
}
}
}
}
