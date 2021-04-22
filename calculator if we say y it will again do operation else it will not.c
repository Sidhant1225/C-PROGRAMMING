#include<stdio.h>
main()
{
int a,b,c;
char o,ch;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("enter operation and choice");
scanf("%c %c",&o,&ch);

while(ch=='y')
{
scanf("%d",&ch);
scanf("%c",&o);
switch(o)
{
case '+':
c=a+b;
break;

case '-':
c=a-b;
break;

case '*':
c=a*b;
break;

case '/':
c=a/b;
break;

printf("%d",c);
  if(ch=='n')
  break;
  }
}

}
