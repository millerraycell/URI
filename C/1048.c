#include<stdio.h>
int main()
{
    float sal;
    scanf("%f",&sal);
    if (0<=sal && sal<=400.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",(sal*15)/100+sal,(sal*15)/100);
    }
    if (400.01<=sal && sal<=800.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",(sal*12)/100+sal,(sal*12)/100);
    }
    if (800.01<=sal && sal<=1200.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",(sal*10)/100+sal,(sal*10)/100);
    }
    if (1200.01<=sal && sal<=2000.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",(sal*7)/100+sal,(sal*7)/100);
    }
    if (sal>2000.01)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",(sal*4)/100+sal,(sal*4)/100);
    }

    return 0;
}
