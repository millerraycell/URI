#include<stdio.h>
main()
{
    float a,b,c;
    double areatri,areacir,areatrap,areaquad,arearet;
    scanf("%f %f %f",&a,&b,&c);
    areatri = (a*c)/2;
    areacir = 3.14159*c*c;
    areatrap = ((a+b)*c)/2;
    areaquad = b*b;
    arearet = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",areatri,areacir,areatrap,areaquad,arearet);
}
