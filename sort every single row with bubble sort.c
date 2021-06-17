#include<stdio.h>
void bubblesort(int [],int);
int main()
{
int a[100][100],i,j,n,b[100];
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
for(j=0;j<n;j++)
{
b[j]=a[i][j];
}
bubblesort(b,n);
for(j=0;j<n;j++)
{
a[i][j]=b[j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
}
void bubblesort(int c[],int n)
{
int temp,i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(c[j]>c[j+1])
{
temp=c[j];
c[j]=c[j+1];
c[j+1]=temp;
}
}
}
}

