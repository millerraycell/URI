#include<stdio.h>
int main()
{
    int saida,dura,fuso,hora;
    scanf("%d %d %d",&saida,&dura,&fuso);
    hora = saida+dura+fuso;
    if (hora==24)
    {
        printf("0\n");
    }
    else if (hora>24)
    {
        printf("%d\n",hora-24);
    }
    else if (hora<0)
    {
        printf("%d\n",hora+24);
    }
    else{
        printf("%d\n",hora);
    }
    return 0;
}
