#include<stdio.h>
int main()
{
    int x,y,i,aux,soma=0;
    while(1)
    {
        scanf("%d %d",&x,&y);
        if (x==0||y==0||x<0||y<0)
        {
            break;
        }
        if (x>=y)
        {
            x = x;
            y = y;
        }
        else
        {
            aux = x;
            x = y;
            y = aux;
        }
        for (i=y;i<=x;i++)
        {
            soma+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",soma);
        soma=0;
    }
}
