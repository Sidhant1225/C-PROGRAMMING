#include<stdio.h>
struct student
{
int rollno;
char name[20];
float fee;
}s;
typedef struct student STUD;
int main()
{
STUD p={1001,"Ram",4500.0};
s=p;
printf(p.name);
printf(s.name);
}
