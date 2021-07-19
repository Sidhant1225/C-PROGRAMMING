#include<stdio.h>
int main()
{
int num,count=0;
printf("Enter num:");
scanf("%d",&num);
while(num!=0)
{
if((num&1)==1)
{
break;
}
else
{
count++;
num=num>>1;
}
}
printf("No of trailing zeroes= %d",count);
}
