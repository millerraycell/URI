#include<stdio.h>
int main()
{
    double x, y,porc;
    scanf("%lf %lf",&x,&y);
    porc = ((y-x)*100)/x;
    printf("%.2lf%%\n",porc);
    return 0;
}
