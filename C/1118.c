#include<stdio.h>
int main()
{
    int n,cont2=0,cont3 = 0;
    float x,media,cont1=0.0;
    while (1)
    {
        while (cont2!=2)
        {
            scanf("%f",&x);
            if (x<0.0 || x>10.0)
            {
                printf("nota invalida\n");
            }
            else
            {
                cont1+=x;
                cont2+=1;
            }
        }
        printf("media = %.2f\n",(cont1*1.0)/2.0);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&n);
        while(cont3!=1||cont3!=2)
        {
            if(n==2)
            {
                cont3 == 1;
            }
            if(n==1)
            {
                cont3 == 2;
            }
            else{
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&n);
            }
        }
        while(1)
        {
            if(cont3==1)
            {
                break;
            }
            else
            {
                while (cont2!=2)
                {
                    scanf("%f",&x);
                    if (x<0.0 || x>10.0)
                    {
                        printf("nota invalida\n");
                    }
                    else
                    {
                        cont1+=x;
                        cont2+=1;
                    }
                }
                printf("media = %.2f\n",(cont1*1.0)/2.0);
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&n);
                while(cont3!=0||cont3==1)
                {
                    if(n==2)
                    {
                        cont3=1;
                    }
                    else
                    {
                        if(n==1)
                        {
                        cont3=0;
                        }
                    }
                }
            }

    }
    return 0;

}
}
