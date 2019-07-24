#include<stdio.h>
int main()
{
    int vet[1000],min = vet[0],tam,num,i,pos;
    scanf("%d",&tam);
    for (i=0;i<tam;i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] < min)
        {
            min = vet[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,pos);
}
