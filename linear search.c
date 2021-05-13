#include<stdio.h>
int main()
{
int a[50],i,ctr=0,num,n;
printf("enter value of n");
scanf("%d",&n);
printf("enter %d no",n);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter no to search");
scanf("%d",&num);

for(i=0;i<n;i++)
{
if(num==a[i])
{
printf("\nno is at %d index",i);
ctr++;
}
}
if(ctr==0)
printf("\nno does not exist");

else
printf("\nno exist %d times",ctr);

return 0;
}
