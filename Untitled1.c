#include<stdio.h>
int main()
{
int a[100],first,second,i,n;
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
first=a[0];
for(i=0;i<n;i++)
{
if(a[i]>first)
{
second=first;
first=a[i];
}
else if(a[i]>second && a[i]!=first)
{
second=a[i];
}
}
printf("largest no is %d",first);
printf("second largest no is %d",second);

}
