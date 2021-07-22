#include<stdio.h>
void mergesort(int a[],int l,int h)
{
int m;
if(l<h)
{
m=(l+h)/2;
mergesort(a,l,m);
mergesort(a,m+1,h);
merge(a,l,h);
}
}
void merge(int a[],int l,int m,int h)
{
int i=l,k=l,j=m+1,p,b[100];
while(i<=m && j<=h)
{
if(a[i]<a[j])
{
b[k]=a[i];
i++;
}
else
{
b[k]=a[j];
j++;
}
k++;
}
if(i>m)
{
for(p=j;p<=h;p++)
{
b[k]=a[p];
k++;
}
}
else
{
for(p=i;p<=m;p++)
{
b[k]=a[p];
k++;
}
}
for(k=l;k<=h;k++)
{
a[k]=b[k];
}
}
int main()
{
int a[100]={1,9,5,7,3,12,8,6},l,h,v;
mergesort(a,l,h);
for(v=0;v<8;v++)
{
printf("%d ",a[v]);
}
}
