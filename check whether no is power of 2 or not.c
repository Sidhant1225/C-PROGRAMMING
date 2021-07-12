#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if((n&(n-1))==0)
printf("the no. is power of 2");
else
printf("not a power of 2");

}
