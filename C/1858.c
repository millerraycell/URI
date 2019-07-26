#include<stdio.h>
#include<stdlib.h>

int main()
{
    int valor,i;
    scanf("%d",&valor);
    int pessoas[valor];

    for(i = 0; i < valor ; i++)
    {
        scanf("%d", &pessoas[i]);
    }
    int menor = pessoas[0];

    for (i = 0 ; i < valor ; i++)
    {
        if(pessoas[i] < menor)
        {
            menor = pessoas[i];
        }
    }
    int encontrado;

    for(i = 0 ; i < valor ; i++)
    {
        if(pessoas[i] == menor)
        {
            encontrado = i;
            break;
        }
    }
    encontrado++;
    printf("%d\n", encontrado);

    return 0;
}
