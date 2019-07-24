#include<stdio.h>
int main()
{
    int num,a=0,b=0,c=0;
    while (num!=4)
    {
        scanf("%d",&num);
        if (num==1)
        {
            a++;
        }
        if (num==2)
        {
            b++;
        }
        if (num==3)
        {
            c++;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,b,c);
    return 0;
}
