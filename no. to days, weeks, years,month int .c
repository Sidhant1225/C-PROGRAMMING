#include <stdio.h>
int main()
{
int d,w,y,m;
printf("enter the number of days=");
scanf("%d",&d);
w=d/7;
printf("number of weeks are %d \n",w);
y=d/365;
printf("number of years are %d \n",y);
m=d/30;
printf("number of months are %d",m);
}
