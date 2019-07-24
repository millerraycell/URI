#include<stdio.h>
int main()
{
    int i,j,a=0;
    float b=0.0;
    double vet[6];
    for (i=0;i<6;i++)
    {
        scanf("%lf",&vet[i]);
    }
    for (j=0;j<6;j++)
    {
        if (vet[j]>=0)
        {
            a++;
            b = vet[j]+b;
        }
    }
    printf("%d valores positivos\n",a);
    printf("%.1f\n",b/a);
    return 0;
}
