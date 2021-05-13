#include<stdio.h>
int main()
{
int a[100],n,i=0,large,small;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
while(i<=n)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];

i++;
}
printf(" largest is : %d",large);
printf(" smallest is : %d",small);
}

