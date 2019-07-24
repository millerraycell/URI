#include<stdio.h>
int fatorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fatorial(n-1);
    }
}
int main()
{
    long int x;
    scanf("%d",&x);
    printf("%d\n",fatorial(x));
    return 0;
}
