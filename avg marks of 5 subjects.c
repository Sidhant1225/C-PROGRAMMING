#include<stdio.h>
main()
{
int p,c,m,e,z,t;
float per,avg;
printf("enter marks of five subjects");
scanf("%d%d%d%d%d",&p,&c,&m,&e,&z);
t=p+c+m+e+z;
printf("total marks %d",t);
avg=t/5;
printf("average marks are= %f",avg);
per=t*100/500;
printf("total percentage is= %f",per);

}
