#include<stdio.h>
int mdc(n,m)
{
    if(n%m==0 || m%n==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int m,n,x;
    scanf("%d %d",&m,&n);
    x = mdc(n,m);
    if (x==0)
    {
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
