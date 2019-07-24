#include<stdio.h>

double ir(double renda)
{
    if (renda<=2000.00)
    {
        return 0;
    }
    if (renda<=3000.00)
    {
        return (renda - 2000.00)*0.08;
    }
    if (renda <= 4500.00)
    {
        return ir(3000.00) + (renda - 3000.00)*0.18;
    }
    else
    {
        return ir(4500.00) + (renda - 4500.00)*0.28;
    }
}
int main()
{
    double renda,aux;
    scanf("%lf",&renda);
    aux = ir(renda);
    if (aux == 0)
    {
        printf("Isento\n");
    }
    else{
        printf("R$ %.2f\n",aux);
    }
    return 0;
}
