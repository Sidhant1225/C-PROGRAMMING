#include<stdio.h>
int fact(int );
int main()
{
int n,result;
printf("enter any no");
scanf("%d",&n);
result = fact(n);
printf("%d factorial is %d",n,result);

return 0;
}
int fact (int n)
{
if(n>1)
{
return n*fact(n-1);
}
else
{
return 1;
}
}
