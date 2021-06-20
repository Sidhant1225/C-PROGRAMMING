#include<stdio.h>
void bsearch(int [],int,int,int);
int main()
{
int a[5]={10,20,30,40,50},loc;
int num,h=4;
printf("enter the no to search");
scanf("%d",&num);
bsearch(a,0,h,num);
return 0;
}
void bsearch(int a[],int l,int h,int num)
{
int m;
if(l<=h)
{
m=(l+h)/2;

if(num==a[m])
{
printf("no is at %d index",m);
return;
}
else if(num>a[m])
bsearch(a,m+1,h,num);
else
bsearch(a,l,m-1,num);
}
else
printf("no does not exist");

}
