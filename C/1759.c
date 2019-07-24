#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    while(x!=0)
    {
        printf("Ho");
        if(x!=1)
        {
            printf(" ");
        }
        x--;
    }
    printf("!\n");
    return 0;
}
