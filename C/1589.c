#include<stdio.h>
int main()
{
    int x,y,t;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",x+y);
        t--;
    }
    return 0;
}
