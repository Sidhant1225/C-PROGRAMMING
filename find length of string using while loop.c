#include<stdio.h>
int main()
{
char a[20];
int i;
printf("\nenter any string ");
gets(a);
i=0;
while(a[i]!='\0')
{
i++;
}
printf("%d",i);
}

