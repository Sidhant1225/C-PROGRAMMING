#include<stdio.h>
main()
{
int n,sum=0,r,t;
printf("enter number");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=t%10;
sum=sum+r*r*r;
t=t/10;
}
printf("%d",sum);
if(n==sum)
{
    printf(" \nit is an armstrong number");
}
else
{
    printf("  \nit is not an armstrong number");
}

}

