#include<stdio.h>
void quicksort(int [],int,int);
int partition(int [],int,int);
int main()
{
int a[50]={44,33,11,55,77,90,40,60,99,22,88,66},l,h,i;
quicksort(a[50],l,h);
for(i=0;i<12;i++)
{
printf("%d ",a[i]);
}
}
void quicksort(int a[],int l,int h)
{
int loc;
if(l<h)
{
loc=partition(a,l,h);
quicksort(a,l,loc-1);
quicksort(a,loc-1,h);
}
}
int partition(int a[],int l,int h)
{
int loc=l,left=l,r=h,temp;
while(1)
{
while(1)
{
if(a[l]>a[loc])
{
r=r-1;
}
else if(l==r)
{
return loc;
}
else
{
temp=a[loc];
a[loc]=a[r];
a[r]=temp;
loc=r;
break;
}
}
while(1)
{
if(a[l]<a[loc])
{
l=l+1;
}
else if(l==r)
{
return loc;
}
else
{
temp=a[loc];
a[loc]=a[l];
a[l]=temp;
loc=l;
break;
}
}
}
}
