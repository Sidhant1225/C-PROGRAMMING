#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if((n&1)==1)
printf("the LSB of a no is set");
else
printf("the LSB of a no is not set");
}
