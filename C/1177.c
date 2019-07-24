#include<stdio.h>
int main()
{
    int vet[1000],num,i,aux=0;
    scanf("%d",&num);
    for (i=0;i<=999;i++,aux++)
    {
        if(aux==num)
        {
            aux=0;
        }
        vet[i]=aux;
        printf("N[%d] = %d\n",i,vet[i]);
    }
}
