#include<stdio.h>
int main()
{
int a[50][50]={{2,4,6},{8,10,12}},i,j,rtotal=0,ctotal=0;

for(i=0;i<2;i++)
{
printf("\n");
rtotal=0;
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
rtotal=rtotal + a[i][j];
}
printf(" row total is: %d ",rtotal);
}

for(j=0;j<3;j++)
{
ctotal=0;
for(i=0;i<2;i++)
{
ctotal=ctotal+a[i][j];
}
}
printf(" column total is: %d ",ctotal);
}
