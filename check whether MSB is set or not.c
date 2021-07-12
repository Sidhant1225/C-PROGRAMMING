#include<stdio.h>
#define INT_SIZE sizeof (int)*8
int main()
{
 int num,msb;
 scanf("%d",&num);
 msb=1<<INT_SIZE-1;
 if((num & msb)==1)
 printf("MSB is set");
 else
 printf("MSB is not set");
}
