#include<stdio.h>
main()
{
   int n,r,t;
   int sum=0;
   printf("enter number");
   scanf("%d",&n);
   t=n;
   if(t==0)
   {
       printf("no sum");
   }
   else if(t<0)
   {
       printf("invalid");
   }
   else
   {
      while(t!=0)
      {
       r=t%10;
       sum=sum+r;
       t=t/10;
       }
  printf("%d",sum);
   }
}

