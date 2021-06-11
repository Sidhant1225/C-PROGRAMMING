#include<stdio.h>
int main()
{
int i=10,*ptr=&i;
char c='a',*cptr=&c;

printf("%d",sizeof(i));
printf("%d",sizeof(ptr));
printf("%d",sizeof(cptr));
printf("%d",sizeof(c));
}
