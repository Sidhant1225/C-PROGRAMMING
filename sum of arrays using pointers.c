#include<Stdio.h>
int main()
{
int a[50],i,n,sum=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",a+i);
sum=sum+*(a+i);
}
printf("sum is %d",sum);
return 0;
}
