#include<stdio.h>
main()
{
int n,m,t,i,r;
int sum=0;
scanf("%d%d",&n,&m);

for(i=n;i<=m;i++)
{
t=i;
sum=0;
while(t>0)
{
r=t%10;
sum=sum+r*r*r;
t=t/10;
}
if(sum==i)
    printf("%d ",i);

}
}






