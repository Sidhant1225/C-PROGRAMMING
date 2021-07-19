#include<stdio.h>
int main()
{
int num,n,bit;
printf("Enter num:");
scanf("%d",&num);
printf("Enter n:");
scanf("%d",&n);
bit=num^(1<<n);
printf("%d",bit);
}
