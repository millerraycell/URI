#include<stdio.h>
int main()
{
    int vet[3],i;
    double x;
    scanf("%llf",&vet[0]);
    printf("N[0] = %.4llf\n",vet[0]);
    for(i=1;i<=3;i++)
    {
        printf("N[%d] = %.4llf\n",i,vet[i]==vet[0]/2.0000*i);
    }
    return 0;
}
