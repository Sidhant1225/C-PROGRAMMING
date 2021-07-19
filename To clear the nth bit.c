#include<stdio.h>
int main()
{
int num,n,new_num;
printf("Enter num");
scanf("%d",&num);
printf("Enter n:");
scanf("%d",&n);
new_num=num & (~(1<<n));
printf("%d",new_num);
}
