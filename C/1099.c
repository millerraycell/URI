#include<stdio.h>
int main()
{
    int n,x,y,aux,cont=0,i;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d %d",&x,&y);
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
        for (i=y+1;i<x;i++)
        {
            if (i%2!=0)
            {
                cont += i;
            }

        }
        printf("%d\n",cont);
        cont=0;
        n--;
    }
    return 0;
}
