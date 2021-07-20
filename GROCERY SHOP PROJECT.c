#include<stdio.h>
#include<string.h>
struct shop
{
char nameofitem[20];
float priceofitem;
int quantityinstock;
};
typedef struct shop sho;
int main()
{
sho s;
char reply='y';
FILE *fptr;
fptr=fopen("GROCERY SHOP","a");
while(reply=='y')
{
printf("QUANTITY IN STOCK,PRICE OF ITEM AND NAME OF ITEM ");
scanf("%d %f",&s.quantityinstock,&s.priceofitem);
fflush(stdin);
gets(s.nameofitem);
scanf("%d %f",&s.quantityinstock,&s.priceofitem);
fwrite(&s,sizeof(s),1,fptr);
printf("DO YOU WANT TO ADD MORE ITEMS YES OR NO");
scanf("%c",&reply);
}
fclose(fptr);
printf("\n TOTAL ITEMS IN THE STOCK");
fptr=fopen("GROCERY SHOP","r");
while(fread(&s,sizeof(s),1,fptr)!=NULL)
{
printf("\nNAME OF ITEM:%s QUANTITY IN STOCK:%d PRICE OF ITEM:%f",s.nameofitem,s.quantityinstock,s.priceofitem);
}
fclose(fptr);
}
