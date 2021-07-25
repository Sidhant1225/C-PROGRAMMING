#include<stdio.h>
struct student
{
int rollno;
char name[20];
float fee;
};
int main()
{
struct student s;
printf("\nEnter rollno,name and fee");
scanf("%d %s %f",&s.rollno,&s.name,&s.fee);
printf("\n Roll no: %d",s.rollno);
printf("\n Name: %s",s.name);
printf("\n Fee: %f",s.fee);
}
