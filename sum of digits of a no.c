#include<stdio.h>
int sumdigit(int );
int main()
{
int n,result;
printf("enter any no");
scanf("%d",&n);
result = sumdigit(n);
printf("%d sum of digit is %d",n,result);

return 0;
}
int sumdigit (int n)
{
if(n==0)
{
return 0;
}
else
{
return n%10+sumdigit(n/10);
}
}
