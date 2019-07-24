#include<stdio.h>
main()
{
    int valor,min,horas,seg;
    scanf("%d",&valor);
    horas = valor/3600;
    min = valor%3600/60;
    seg = valor%60;
    printf("%d:%d:%d\n",horas,min,seg);
}
