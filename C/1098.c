#include<stdio.h>
int main()
{
    double i = 0,j =1, l=2,k=3;
    while(i<=2)
    {
        printf("I=%lf J=%lf\n",i,j);
        printf("I=%lf J=%lf\n",i,l);
        printf("I=%lf J=%lf\n",i,k);
        i+=0.2;
        j+=0.2;
        l+=0.2;
        k+=0.2;

    }
    return 0;
}
