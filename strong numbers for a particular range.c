#include<stdio.h>
main()
{
int n,i,t,m,j,r;
int fact=1;
int s=0;
scanf("%d %d",&n,&m);

for(j=n;j<=m;j++)
{
t=j;
fact=1;
s=0;
while(t>0){
fact=1;
r=t%10;
for(i=1;i<=r;i++)
fact=fact*i;
s=s+fact;
t=t/10;
}
if(s==j)
printf("%d ",j);
}
}
