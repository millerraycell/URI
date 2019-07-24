#include<stdio.h>
int main()
{
    int vet[10],cont=0,num,i;
    for (i=0;i<10;i++)
    {
        scanf("%d",&vet[i]);
        if (vet[i]<=0)
        {
            vet[i]=1;
        }
        printf("X[%d] = %d\n",i,vet[i]);
    }
    return 0;
}
