#include<stdio.h>
int bsearch(int[],int,int);
int main()
{
int a[5]={10,20,30,40,50},loc;
int num;
printf("\nenter the no to search");
scanf("%d",&num);
loc=bsearch(a,5,num);
if(loc==-1)
printf("no does not exist");
else
printf("no exist at %d index",loc);
return 0;
}
int bsearch(int a[],int n,int num)
{
int l=0,m;
int h=4;
while(l<=h)
{
m=(l+h)/2;
if(num==a[m])
return m;
else if(num>a[m])
l=m+1;
else
h=m-1;
}
return -1;
}
