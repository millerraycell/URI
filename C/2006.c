#include<stdio.h>
int main()
{
    int x,vet[5],i,acertou=0;
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        scanf("%d",&vet[i]);
        if(vet[i]==x)
        {
            acertou++;
        }
    }
    printf("%d\n",acertou);
    return 0;
}
