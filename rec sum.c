// wap to find suum of first5 natural no. using recursion

int sum(int n)
{
    if (n<=5)
    {
        return(n+sum(n+1));
    }
    else{return 0;}
}
void main()
{
   printf("%d",sum(1));

}
