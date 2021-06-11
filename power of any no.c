#include<stdio.h>
int power(int,int );
int main()
{
int x,y,result;
printf("enter any no");
scanf("%d",&x);
printf("enter power");
scanf("%d",&y);
result = power(x,y);
printf("%d",result);

return 0;
}
int power(int x,int y)
{
if(y==0)
{
return 1;
}
else
{
return x*power(x,y-1);
}
}
