#include<stdio.h>
int main()
{
    int vet[20],i,j,a=0;
    for (i=0;i<=19;i++)
    {
        scanf("%d",&vet[i]);
    }
    for (j=19;j>=0;j--)
    {
        printf("N[%d] = %d\n",a,vet[j]);
        a++;
    }
    return 0;
}
