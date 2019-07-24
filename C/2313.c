#include<stdio.h>
#include<stdlib.h>
int tipo(int a, int b, int c)
{
    if(a == b && a == c && b == c)
    {
        return 1;
    }
    if(a==b || a==c || b==c)
    {
        return 2;
    }
    else
        return 3;
}
int retangulo(int a, int b, int c)
{
    if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == b*b+a*a)
    {
        return 1;
    }
    else
        return 2;
}
int main()
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    if (abs(b-c)<a<b+c || abs(a-c)<b<a+c || abs(a-b)<c<a+b)
    {
        x = tipo(a,b,c);
        printf("Valido-");
        if(x==1)
        {
            printf("Equilatero\n");
            if(retangulo(a,b,c) == 1)
            {
                printf("Retangulo: S\n");
            }
            else
                printf("Retangulo: N\n");
        }
        if(x==2)
        {
            printf("Isoceles\n");
            if(retangulo(a,b,c) == 1)
            {
                printf("Retangulo: S\n");
            }
            else
                printf("Retangulo: N\n");
        }
        if(x==3)
        {
            printf("Escaleno\n");
            if(retangulo(a,b,c) == 1)
            {
                printf("Retangulo: S\n");
            }
            else
                printf("Retangulo: N\n");
        }
    }
    else
        printf("Invalido\n");
    return 0;
}
