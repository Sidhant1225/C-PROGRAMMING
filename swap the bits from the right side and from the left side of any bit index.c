#include<stdio.h>
#define INT_SIZE sizeof(int)*8
int main()
{
int num,n,m,b,i,temp,firnew,secnew;
printf("Enter num:");
scanf("%d",&num);
printf("Enter the value of n and m");
scanf("%d %d",&n,&m);
printf("Enter the no of bits to swap");
scanf("%d",&b);

for(i=1;i<=b;i++)
{
firnew=num<<INT_SIZE-n<<i;
secnew=num<<INT_SIZE-m>>i;
temp=firnew;
firnew=secnew;
secnew=temp;
}
printf("%d",num);
}
