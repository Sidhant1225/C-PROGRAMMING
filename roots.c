#include<stdio.h>
#include<math.h>
 void main()
{
int a,b,c,d;
int r1;
printf("Enter values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-4*a*c;
  if(d>0)
    {
      printf("the roots are %d",r1=((-b)+sqrt(d)/2*a));
    }
  else
    {
     printf("roots are imaginary");
    }
}
