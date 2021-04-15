#include<stdio.h>
int prime(int a);
int main()
{
int n,a,i,j,flag=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a);
if(prime(a))
    printf("\nprime");
else
    printf("\n not prime");
}
return 0;
}
//function defining
int prime(int a)
{
    int j;
for(j=2;j<=a/2;j++)
{
if(a%j==0)
    {
return 0;//if it goes that means it gets divided and is not prime
}
}
return 1;
}
