#include<stdio.h>
int main()
{
    int x,z,cont = 1,i;
    scanf("%d %d",&x,&z);
    while(z<=x)
    {
        scanf("%d",&z);
    }
    for(i=x;x<=z;i++,cont++)
    {
        x += (i+1);
    }
    printf("%d\n",cont);
    return 0;
}
