#include<stdio.h>
main()
{
    double r1,r2,delta,x;
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta = (b*b) - (4*a*c);
    x=sqrt(delta);
    if(delta<0 || a<=0){
        printf("Impossivel calcular\n");
    }
    else
    {
        r1 = ((-b + x)/(2*a));
        r2 = ((-b - x)/(2*a));
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
}
