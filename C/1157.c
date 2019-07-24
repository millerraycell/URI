#include<stdio.h>
int main()
{
    int x,cont=1;
    scanf("%d",&x);
    while(cont<x)
    {
        if(x%cont==0)
        {
            printf("%d\n",cont);
        }
        cont++;
    }
    return 0;
}
