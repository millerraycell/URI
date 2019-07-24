#include<stdio.h>
int main()
{
    int x,y,i,cont=0;
    scanf("%d %d",&x,&y);
    while(y<=0)
    {
        scanf("%d",&y);
    }
    for(i=0;i<y;i++)
    {
        cont+=i+x;
    }
    printf("%d\n",cont);
    return 0;
}
