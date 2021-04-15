#include<stdio.h>
int smallest(int n);
int largest (int n);
int main()
{
int n,y,z;
scanf("%d",&n);
y=smallest(n);
z=largest(n);
printf("%d  %d",y,z);
}

int largest(int n)
{
int r,large=0;
while(n!=0)
{
r=n%10;

if(r>large)
large=r;
n=n/10;
}
return large;
}

int smallest(int n)
{
int r,small=9;
while(n!=0)
{
r=n%10;

if(r<small)
small=r;
n=n/10;
}
return small;
}
