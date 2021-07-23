#include<stdio.h>
int main()
{
char a[20];
int i;
printf("\nenter any string ");
gets(a);
i=0;
for(i=0;a[i]!='\0';i++);
printf("%d",i);
}
