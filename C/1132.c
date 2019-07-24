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
    for (i=y;i<=x;i++)
    {
        if(i%13!=0)
        {
            cont+=i;
        }
    }
    printf("%d\n",cont);
    return 0;
}
