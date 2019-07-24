#include<stdio.h>
int somatorio(void)
{
    int den;
    float cont = 0.0;
    for(den=1;den<=100;den++)
    {
        cont+=(1.0/den);
    }
    printf("%.2f\n",cont);
}
int main()
{
    somatorio();
    return 0;
}
