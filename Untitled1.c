#include<stdio.h>
main()
{
int n,m,i,j,flag=1,sum=0;
scanf("%d %d",&n,&m);

for(i=n;i<=m;i++)
{
for(j=2;j<=i/2;j++)
{
flag=1;
if(i%j==0)
flag=0;
}
if(flag==1)
    sum=sum+i;

printf("%d ",sum);
}
}
