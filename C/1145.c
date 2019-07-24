#include<stdio.h>
int main()
{
    int a,b,cont=1,aux=0;
    scanf("%d %d",&a,&b);
    while (cont<=b)
    {
        printf("%d",cont);
        aux++;
        if(aux == a)
        {
            printf("\n");
            aux = 0;
        }
        else
        {
            printf(" ");
        }
        cont++;N
    }
    return 0;
}
