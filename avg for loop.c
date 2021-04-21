#include<stdio.h>
main()
{
int i,sum=0;
float avg;
for(i=1;i<=10;i++)
{
printf("%d   ",i);
sum=sum+i;
avg=(float)sum/i;
printf("%d    ",sum);
printf("%f\n",avg);
}
}
