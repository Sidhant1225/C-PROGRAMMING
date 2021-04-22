#include<stdio.h>
#include<math.h>
int main()
{
int n,num=0,r,i=0,numb=0,temp=1;
scanf("%d",&n);
while(n!=0)
{
r=n%10;
num=num+r*pow(2,i);
n=n/10;
i++;
}
printf("%d ",num);

while(num !=0)
{
r=num%8;
num=num/8;
numb=numb+r*temp;
temp=temp*10;
}
printf("%d ",numb);
}
