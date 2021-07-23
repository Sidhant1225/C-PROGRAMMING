#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int i,j,n=0,flag=0;
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
if(b[0]==a[i])
{
n=i;
for(j=0;j<strlen(b);j++)
{
if(b[j]==a[n])
{
flag=1;
}
else
{
flag=0;
break;
}
n++;
}
if(flag==1)
{
printf("YES");
return ;
}
else
{
continue;
}
}
}
if(flag==0)
{
    printf("NO");
}
}
