#include<stdio.h>
int main()
{
    int vet[4],i,som=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&vet[i]);
    }
    for(i=0;i<4;i++)
    {
        if(i!=3)
        {
            vet[i]-=1;
        }
        som+=vet[i];
    }
    printf("%d\n",som);
    return 0;
}
