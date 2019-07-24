#include<stdio.h>
int main()
{
    int n,x,y;
    double div;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d %d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else{
            div = x*1.0/y;
            printf("%.1lf\n",div);
        }
        n--;
    }
    return 0;
}
