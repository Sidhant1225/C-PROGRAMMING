#include<stdio.h>
int main()
{
int n,i,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
a[i]=a[i]/2;

else
a[i]=a[i]*2;
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

}
