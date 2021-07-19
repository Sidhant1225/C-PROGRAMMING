#include<stdio.h>
#define INT_SIZE sizeof(int)*8
int main()
{
int num,i,j,flag=0;
printf("Enter num:");
scanf("%d",&num);
j=INT_SIZE-1;
for(i=0;i<INT_SIZE/2;i++)
{
if((num>>i)==(num>>j))
{
flag=1;
}
else
{
 break;
}
j--;
}
if(flag==1)
{
printf("Palindrome");
}
else
{
printf("Not Palindrome");
}
}
