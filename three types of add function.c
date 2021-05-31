#include<stdio.h>
void add();
int main()
{
int a,b;
scanf("%d %d",&a,&b);

add(a);
//add1(a,b);
//add2();
return 0;
}
void add(int a)
{
printf("value of a is %d ",a);
}
void add1(int a,int b)
{
printf("value of a is %d ",a);
printf("value of b is %d ",b);
}
void add2()
{
int a,b;
scanf("%d %d",&a,&b);
printf("%d %d",a,b);
}

