#include<stdio.h>
int main()
{
char a[20];
int i,j,k,n,m,x;
printf("\nenter any string ");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' '&&a[i+1]==' ')
{
for(j=i;a[j]!='\0';j++)
{
a[j]=a[j+1];
i--;
}
}
}
printf("%s",a);
}


