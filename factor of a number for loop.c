#include<stdio.h>
main()
{
int i,n;
printf("enter number");
scanf("%d",&n);
 if(n==0)
 {
   printf("no factor");
 }
 else if(n<0)
 {
     printf("invalid");
 }
else for(i=1;i<=n;i++)
{
    if(n%i==0){

    printf("%d\n",i);
    }
}
}


