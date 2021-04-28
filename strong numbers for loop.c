#include<stdio.h>
main()
{
int n,i,r;
int fact=1;
int sum=0;
printf("enter number");
scanf("%d",&n);

while(n!=0){
fact=1;
r=n%10;
for(i=1;i<=r;i++)
{
fact=fact*i;
}
sum=sum+fact;
n=n/10;
}
printf("%d",sum);
}
