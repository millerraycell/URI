#include<stdio.h>
main()
{
    float n1,n2,n3;
    double media;
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    media = ((n1*2)+(n2*3)+(n3*5))/10;
    printf("MEDIA = %.1lf\n",media);
}
