#include <stdio.h>
#include<math.h>
int main()
{
  int n,t,c=0,sum=0,r,temp;
    scanf("%d",&n);
    temp=n;
    t=n;
  while(n>0)
  {
  n=n/10;
  c++;
  }
  while(t>0)
  {
    r=t%10;
    sum=sum+pow(r,c);
    t=t/10;
  }
  printf("%d",sum);
  if(sum==temp)
    printf("\nyes");
  else
    printf("no");
    return 0;
}
