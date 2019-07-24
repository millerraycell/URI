#include<stdio.h>
int main()
{
    int cont2=0;
    float x,media,cont1=0.0;
    while (cont2!=2)
    {
        scanf("%f",&x);
        if (x<0.0 || x>10.0)
        {
            printf("nota invalida\n");
        }
        else{
            cont1+=x;
            cont2+=1;
        }
    }
    printf("media = %.2f\n",(cont1*1.0)/2.0);
    return 0;
}
