#include<stdio.h>
int main()
{
    int i;
    double num,vet[100];
    for (i=0;i<=99;i++)
    {
        scanf("%lf",&num);
        vet[i]=num;
        if(vet[i]<=10.0)
        {
            printf("A[%d] = %.1lf\n",i,num);
        }
    }
   return 0;
}
