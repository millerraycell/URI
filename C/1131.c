#include<stdio.h>
int main()
{
    int n=0,gg,gi,emp=0,cont=0,contg=0,conti=0;
    while (n!=2)
    {
        scanf("%d %d",&gi,&gg);
        if (gg>gi)
        {
            contg++;
        }
        if (gg<gi)
        {
            conti++;
        }
        if (gg==gi)
        {
            emp++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        cont++;

    }
    printf("%d grenais\n",cont);
    printf("Inter:%d\n",conti);
    printf("Gremio:%d\n",contg);
    printf("Empates:%d\n",emp);
    if(contg>conti)
    {
        printf("Gremio venceu mais\n");
    }
    if (contg<conti)
    {
        printf("Inter venceu mais\n");
    }
    if(contg==conti)
    {
        printf("Nao houve vencedor\n");
    }
    return 0;
}
