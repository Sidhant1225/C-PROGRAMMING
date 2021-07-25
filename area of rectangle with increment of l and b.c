#include<stdio.h>
struct rectangle
{
int l;
int b;
};
typedef struct rectangle rec;
int main()
{
rec getdata();
void putdata(rec);
rec increment(rec);
rec a;
a=getdata();
putdata(a);
a=increment(a);
putdata(a);
return 0;
}
rec getdata()
{
rec x;
printf("\n Enter length and breadth");
scanf("%d %d",&x.l,&x.b);
return x;
}
void putdata(rec y)
{
printf("\n Length: %d",y.l);
printf("\n Breadth: %d",y.b);
printf("\n Area is: %d",(y.l*y.b));
}
rec increment(rec z)
{
z.l=z.l+2;
z.b=z.b+3;
return z;
}
