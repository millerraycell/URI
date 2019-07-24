#include<stdio.h>
main()
{
    double sal,vendas,saltot;
    char nome;
    scanf("%s",&nome);
    scanf("%lf",&sal);
    scanf("%lf",&vendas);
    saltot=((vendas*15)/100)+sal;
    printf("TOTAL = R$ %.2lf %s\n",saltot,nome);
}
