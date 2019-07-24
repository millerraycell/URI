#include<stdio.h>
int main()
{
    int x,cont=1;
    scanf("%d",&x);
    while (cont<=10)
    {
        printf("%d x %d = %d\n",cont,x,x*cont);
        cont++;
    }
    return 0;
}
