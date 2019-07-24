#include<stdio.h>
int main()
{
    int n,x,y,i;
    scanf("%d",&n);
    while (n!=0)
    {
        scanf("%d %d",&x,&y);
        int aux = 0;
        if (x%2!=0)
        {
            int aux=x;
        }
        else{
            int aux=x+1;
        }
        for (i=x;y!=0;i++)
        {
            if (i%2!=0)
            {
                aux +=i;
                y--;
            }
        }
        printf("%d\n",aux);
        aux=0;
        n--;
    }
    return 0;
}
