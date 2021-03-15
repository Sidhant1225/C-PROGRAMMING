#include<stdio.h>
int main()
{
int s;
float bon,gro;
char dec,F,M;
scanf("%c",&dec);
scanf("%d",&s);

if(dec='F' && s>10000){
printf("salary=%d",s);
bon=s*0.05;
printf("bonus=%f",bon);
gro=s+bon;
printf("gross salary=%f",gro);}

else if(dec='M' && s>10000){
printf("salary=%d",s);
bon=s*0.1;
printf("bonus=%f",bon);
gro=s+bon;
printf("gross salary=%f",gro);}

else if(dec='F' && s<10000){
printf("salary=%d",s);
bon=s*0.07;
printf("bonus=%f",bon);
gro=s+bon;
printf("gross salary=%f",gro);}

else if(dec='M' && s<10000){
printf("salary=%d",s);
bon=s*0.12;
printf("bonus=%f",bon);
gro=s+bon;
printf("gross salary=%f",gro);}
}
