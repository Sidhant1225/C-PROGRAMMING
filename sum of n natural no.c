#include<stdio.h>
int sum(int );
int main()
{
int n,result;
printf("enter any no");
scanf("%d",&n);
result = sum(n);
printf("%d sum is %d",n,result);

return 0;
}
int sum (int n)
{
if(n>1)
{
return n+sum(n-1);
}
else
{
return 1;
}
}
