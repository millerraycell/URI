#include<stdio.h>

int main()
{
    int vet[10],num,i,a,aux;
    scanf("%d",&a);
    vet[0]=a;
    for (i=1;i<10;i++)
    {
        vet[i] = vet[i-1]*2;
    }
    for (i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,vet[i]);
    }

    return 0;
}
