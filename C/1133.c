#include<stdio.h>
int main()
{
    int x,y,aux,cont=0,i;
    scanf("%d %d",&x,&y);
    if (y>x)
    {
        aux = x;
        x = y;
        y = aux;
    }
    else{
        x=x;
        y=y;
    }
    for (i=y+1;i<x;i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
