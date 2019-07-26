#include <stdio.h>

int main()
{
    int valor, cont = 0;
    scanf("%d",&valor);
    int aux = valor;
    while(cont < 6)
    {
        if(aux%2 != 0)
        {
            printf("%d\n",aux);
            cont++;
        }
        aux++;
    }
}
