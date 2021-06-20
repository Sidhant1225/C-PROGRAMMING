#include<stdio.h>
int main()
{
int a[5]={10,20,30,40,50};
int l=0,h=4,m,num;
printf("\nenter the no to search");
scanf("%d",&num);
while(l<=h)
{
m=(l+h)/2;
if(num==a[m])
{
printf("no is at %d index",m);
return 0;
}
else if(num>a[m])
l=m+1;
else
h=m-1;
}
printf("no does not exist");
return 0;
}
