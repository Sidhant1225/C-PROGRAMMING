#include<stdio.h>
int main()
{
int sumarr(int[],int);
int a[50],i,n,sum;
printf("enter the value of n");
scanf("%d",&n);
printf("enter %d no:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sum=sumarr(a,n);
printf("\n sum is %d",sum);
return 0;
}
sumarr(int a[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
return sum;
}
