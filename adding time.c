#include<stdio.h>
struct time1
{
int hrs;
int min;
};
typedef struct time1 tm;
int main()
{
tm getdata();
void putdata(tm);
tm sum(tm,tm);
tm a,b;
a=getdata();
putdata(a);
b=sum(tm,tm);
putdata(b);
return 0;
}
tm getdata()
{
tm x,z;
printf("\n Enter the time i.e hrs and min for t1 and t2");
scanf("%d %d %d %d",&x.hrs,&x.min,&z.hrs,&z.min);
return x,z;
}
void putdata(emp y)
{
printf("\n hrs for t1: %d",y.);
printf("\n min for t1: %s",y.ename);
printf("\n hrs for t2: %f",y.salary);
printf("\n min for t2: %f",y.salary);
printf("Total time is: %d : %d",)
}
tm sum(tm t1,tm t2)
{
h=t1.hrs+t2.hrs;
m=t1.min+t2.min;
if(m>60)
{
h=h+1;
m=m-60;
}
return h,m;
}

