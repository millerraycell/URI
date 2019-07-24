#include<stdio.h>
int main()
{
    int i=1,j=7,x=j;
    while (i<=9)
    {
        printf("I=%d J=%d\n",i,j);
        j--;
        if(j<=x-3)
        {
            i+=2;
            j+=5;
            x=j;
        }
    }
    return 0;
}
