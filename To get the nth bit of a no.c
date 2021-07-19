#include<stdio.h>
int main()
{
int num,n,bit;
scanf("%d",&num);
printf("ENTER THE BIT");
scanf("%d",&n);
bit=(num>>n)&1;
printf("%d",bit);
}
