#include<stdio.h>
int main()
{
    int vet[100],x=0,i,aux;
    for (i=0;i<=99;i++)
    {
        scanf("%d",&vet[i]);
        if (vet[i]>x)
        {
            x=vet[i];
            aux=i;
        }
    }
    printf("%d\n%d\n",x,aux+1);
    return 0;
}
