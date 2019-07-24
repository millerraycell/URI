#include<stdio.h>
int main()
{
    int n,i,aux1;
    scanf("%d",&n);
    int vet[n];
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&vet[i]);
    }
    int aux=vet[0];
    for(i=1;i<n+1;i++)
    {
        if(vet[i]<aux)
        {
            aux = vet[i];
            aux1 = i;
        }
    }
    printf("%d\n",aux1);
    return 0;
}
