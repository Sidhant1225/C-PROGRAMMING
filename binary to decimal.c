#include<stdio.h>
#include<math.h>
int main()
{
int n,num=0,r,i=0;
scanf("%d",&n);
while(n!=0)
{
r=n%10;
num=num+r*pow(2,i);
n=n/10;
i++;
}
printf("%d",num);
}
