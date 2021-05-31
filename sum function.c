#include<stdio.h>
int add();
int main()
{
add();
add();
add();

return 0;
}
int add()
{
int a,b;
scanf("%d %d",&a,&b);
printf("sum is : %d",a+b);
return 0;

}
