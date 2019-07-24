#include<stdio.h>
int main()
{
    int i,x,m2=0,m3=0,m4=0,m5=0;
    scanf("%d",&x);
    int vet[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&vet[i]);
        if(vet[i]%2==0)
            m2++;
        if(vet[i]%3==0)
            m3++;
        if(vet[i]%4==0)
            m4++;
        if(vet[i]%5==0)
            m5++;
    }
    printf("%d Multiplo(s) de 2\n",m2);
    printf("%d Multiplo(s) de 3\n",m3);
    printf("%d Multiplo(s) de 4\n",m4);
    printf("%d Multiplo(s) de 5\n",m5);
    return 0;
}
