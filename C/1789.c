#include<stdio.h>
int main()
{
    int vet[500],i,cas;
    while(scanf("%d",&cas)!=EOF)
    {
        for(i=0;i<cas;i++)
        {
            scanf("%d",&vet[i]);
            if (vet[i]>vet[0])
            {
                vet[0]=vet[i];
            }
        }
        if (vet[0]<10)
        {
            printf("1\n");
        }
        if (vet[0]>=10 && vet[0]<20)
        {
            printf("2\n");
        }
        if (vet[0]>=20)
        {
            printf("3\n");
        }
    }
    return 0;
}
