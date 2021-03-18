//wap using lifo
void show(int n)
{
    if(n<=10)
    {
        show(n+1);
        printf("%d \n",n);
    }
}
void main()
{
    show(1);
}
