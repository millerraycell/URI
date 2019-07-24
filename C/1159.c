#include<stdio.h>
int main()
{
    int x,i,y;
    while(1)
    {
        scanf("%d",&x);
        if (x==0)
        {
            break;
        }
        else{
            int aux = 0;
            y=5;
            if (x%2==0)
            {
                int aux = x;
            }
            else{
                int aux = x+1;
            }
            for(i=x;y!=0;i++)
            {
                if (i%2==0)
                {
                    aux += i;
                    y--;
                }
            }
            printf("%d\n",aux);
        }
    }
    return 0;
}
