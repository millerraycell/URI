#include <stdio.h>

long long int fat(int x)
{
    long long int valor = 1;
    for(int i = 1; i <=x ; i++)
    {
        valor*=i;
    }
    return valor;
}

int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        long long int resultado = fat(m) + fat(n);
        printf("%llu\n",resultado);
    }
}
