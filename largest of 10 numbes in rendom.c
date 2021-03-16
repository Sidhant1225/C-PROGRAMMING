#include<stdio.h>
main()
{
int i,n,large;
scanf("%d",&n);
large=n;

for(i=1;i<10;i++)
{
scanf("%d ",&n);

if(n>large){
large=n;
}
}
printf("%d ",large);

}
