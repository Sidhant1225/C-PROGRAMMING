#include<stdio.h>
main()
{
int i,sum=0;
for(i=1;i<=10;i=i+2)
{
printf("%d   ",i);

sum=sum+i;
printf("%d\n",sum);
}
}
