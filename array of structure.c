#include<stdio.h>
struct bookdetails
{
int bcode;
char bname[20];
float rate;
int qoh;
};

typedef struct bookdetails book;

int main()
{
book b[5];
int i,tot=0;
printf("\n enter 5 book details");
for(i=0;i<5;i++)
{
printf("\n Enter bcode,bname,rate,qoh");
scanf("%d %s %f %d",&b[i].bcode,&b[i].bname,&b[i].rate,&b[i].qoh);
tot=tot+b[i].qoh;
}
printf("\n Book details  are:");
for(i=0;i<5;i++)
{
printf("\n %d %s %f %d",b[i].bcode,b[i].bname,b[i].rate,b[i].qoh);
}
printf("\n Total books in stock %d",tot);
}
