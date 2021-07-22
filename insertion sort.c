#include<stdio.h>
int main()
{
int a[]={6,4,1,2,5};
int k=1,p,temp,i;
for(k=1;k<5;k++)
{
p=k-1;
temp=a[k];
while(a[p]>temp && p>=0)
{
a[p+1]=a[p];
p=p-1;
}
a[p+1]=temp;

}
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
return 0;

}
