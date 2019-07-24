#include<stdio.h>
main()
{
    int valor,cedula100,resto,cedula50,resto2,cedula20,resto3,cedula10,resto4,cedula5,resto5,cedula2,resto6,cedula1;
    scanf("%d",&valor);
    cedula100 = valor/100;
    resto = valor%100;
    cedula50 = resto/50;
    resto2 = resto%50;
    cedula20 = resto2/20;
    resto3 = resto2%20;
    cedula10 = resto3/10;
    resto4 = resto3%10;
    cedula5 = resto4/5;
    resto5 = resto4%5;
    cedula2 = resto5/2;
    resto6 = resto5%2;
    cedula1 = resto6/1;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",valor,cedula100,cedula50,cedula20,cedula10,cedula5,cedula2,cedula1);
    }
