#include<stdio.h>
int main()
{
int num,n,new_num;
printf("Enter the no");
scanf("%d",&num);
printf("Enter n:");
scanf("%d",&n);
new_num=(1<<n)|num;
printf("\n new number= %d",new_num);
}
