#include<stdio.h>
#define INT_SIZE sizeof(int)*8
int main()
{
int num,zeroes=0,ones=0,i;
printf("Enter num:");
scanf("%d",&num);
for(i=0;i<INT_SIZE;i++)
{
if(num&1)
ones++;
else
zeroes++;
num>>=1;
}
printf("Total zeroes bit=%d",zeroes);
printf("\nTotal ones bit=%d",ones);
}
