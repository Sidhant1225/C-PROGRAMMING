#include<stdio.h>
int main()
{
int n,num=0,temp=1,r;
scanf("%d",&n);
while(n!=0)
{
r=n%2;
n=n/2;
num=num+r*temp;
temp=temp*10;
}
printf("%d",num);
}

