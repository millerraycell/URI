#include<stdio.h>
#include<stdlib.h>

int mdc(int a, int b)
{
    if(b == 0)
        return a;
    else
        return mdc(b, a%b);
}

int main()
{
    int quantidade;
    scanf("%d",&quantidade);
    while(quantidade--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d\n",mdc(x,y));
    }
    return 0;
}
