#include<stdio.h>
void fibonacci(int n);
int main()
{
int n;
scanf("%d",&n);
fibonacci(n);

}

void fibonacci(int n)
{
int first=0,second=1,i,next=0;
printf("%d %d ",first,second);

for(i=1;i<=n;i++)
{

next=first+second;
first=second;
second=next;
printf("%d ",second);
    }
}


