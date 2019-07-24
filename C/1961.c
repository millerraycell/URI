#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d %d",&x, &y);
    int vet[y];
    for(i=0;i<y;i++)
    {
        scanf("%d",&vet[i]);
    }
    for(i=0;i<y;i++)
    {
        if((vet[i+1]-vet[i])>x && )
        {
            printf("%d\n",vet[i]);
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");
    return 0;
}
