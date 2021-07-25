#include<stdio.h>
struct date
{
int dd;
int mm;
int yy;
};
struct student
{
int rollno;
char name[20];
struct date dob;
};
int main()
{
struct student s;
printf("\n enter rollno,name and dob(dd-mm-yy)");
scanf("%d %s %d %d %d",&s.rollno,&s.name,&s.dob.dd,&s.dob.mm,&s.dob.yy);
printf("\n Rollno:%d",s.rollno);
printf("\n Name:%d",s.name);
printf("\n DOB:%d-%d-%d",s.dob.dd,s.dob.mm,s.dob.yy);

}
