#include <stdio.h>
int main()
{
long int s;
double bon,tot;
printf("salary=");
scanf("%ld",&s);

if(s<=25000){
    bon=s*0.2;
    printf("bonus= %lf",bon);
tot=s+bon;
printf("total_salary= %lf",tot);}

else if(s<=50000){
    bon=s*0.15;
    printf("bonus= %lf",bon);
tot=s+bon;
printf("total_salary= %lf",tot);}

else if(s<=100000){
    bon=s*0.1;
    printf("bonus= %lf",bon);
tot=s+bon;
printf("total_salary= %lf",tot);}

else{
    bon=s*0.05;
    printf("bonus= %lf",bon);
tot=s+bon;
printf("total_salary= %lf",tot);}


    }
