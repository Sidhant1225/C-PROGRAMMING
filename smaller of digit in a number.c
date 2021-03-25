#include<stdio.h>
main()
{
int n,small,r;
scanf("%d",&n);
small=9;
while(n!=0)
{
r=n%10;
if(r<small)
small=r;
n=n/10;

}
printf("%d",small);

}
