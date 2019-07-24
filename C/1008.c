#include<stdio.h>
main()
{
    int num,horas;
    float num2;
    double sal;
    scanf("%d",&num);
    scanf("%d",&horas);
    scanf("%f",&num2);
    sal=horas*num2;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,sal);
}
