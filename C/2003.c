#include<stdio.h>
int main()
{
    int horas,minutos;
    while(scanf("%d:%d",&horas,&minutos)!=EOF)
    {
        int atraso = ((((horas*60) + minutos) + 60) - 480);
        if(atraso <= 0)
        {
            printf("Atraso maximo: 0\n");
        }
        else
        {
            printf("Atraso maximo: %d\n",atraso);
        }
    }
    return 0;
}
