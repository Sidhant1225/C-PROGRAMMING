#include<stdio.h>
void hcf(int ,int  );
int main()
{
int x,y,result;
printf("enter any no");
scanf("%d",&x);
printf("enter another no");
scanf("%d",&y);
hcf(x,y);

}
void hcf(int x,int y)
{
int rem;
rem=x%y;
if(rem==0)
{
printf("%d",y);
}
else
{
hcf(y,rem);
}
}
