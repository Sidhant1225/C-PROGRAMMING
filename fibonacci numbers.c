#include<stdio.h>
main()
{
int n,i,first=0,second=1,next;
scanf("%d",&n);
for(i=0;i<n;i++){

if(i<1){
next=i;
printf("%d ",next);
}
else{
next=first+second;
second=first;
first=next;
printf("%d ",next);
}

}
}
