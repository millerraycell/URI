#include<stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        int cont = 0;
        while(x!=1)
        {
            x/=2;
            cont++;
        }
        printf("%d\n",cont);
    }
    return 0;
}
