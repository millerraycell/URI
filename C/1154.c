#include<stdio.h>
int main()
{
    int num,aux=0,cont=0;
    while(1)
    {
        scanf("%d",&num);
        if (num<0)
        {
            break;
        }
        aux += num;
        cont++;
    }
    printf("%.2f\n",1.0*aux/cont);
    return 0;
}
