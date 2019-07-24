#include<stdio.h>
int main()
{
    int n,x,cont=1,aux=0;
    scanf("%d",&n);
    while (n!=0)
    {
        scanf("%d",&x);
        while(cont<x)
        {
            if(x%cont==0)
            {
                aux += cont;
            }
            cont++;
        }
        if (aux == x)
        {
            printf("%d eh perfeito\n",x);
        }
        else{
            printf("%d nao eh perfeito\n",x);
        }
        n--;
        cont = 1;
        aux = 0;
    }
    return 0;
}
