#include<stdio.h>
int main()
{
int a[100],n,i,b[100],c=0;

scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
c++;
b[j]=0;
}
}
}
}
