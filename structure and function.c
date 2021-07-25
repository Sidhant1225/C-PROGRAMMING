#include<stdio.h>
struct employee
{
int ecode;
char ename[20];
float salary;
};
typedef struct employee emp;
int main()
{
emp getdata();
void putdata(emp);
emp increment(emp);
emp a;
a=getdata();
putdata(a);
a=increment(a);
putdata(a);
return 0;
}
emp getdata()
{
emp x;
printf("\n Enter ecode,ename,salary");
scanf("%d %s %f",&x.ecode,&x.ename,&x.salary);
return x;
}
void putdata(emp y)
{
printf("\n Ecode: %d",y.ecode);
printf("\n Ename: %s",y.ename);
printf("\n Salary: %f",y.salary);
}
emp increment(emp z)
{
z.salary=z.salary+1000;
return z;
}

