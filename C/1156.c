#include<stdio.h>
int somatorio(void)
{
    float den,num,cont = 0.0;
    for(den=1.0,num=1.0;num<=39;num+=2,den*=2)
    {
        cont+=(num/den);
    }
    printf("%.2f\n",cont);
}
int main()
{
    somatorio();
    return 0;
}
