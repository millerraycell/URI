#include<stdio.h>
int main()
{
    int matricula,matriculaaluno=0,quant;
    double nota,notaaluno=0;
    scanf("%d",&quant);
    while (quant != 0)
    {
        scanf("%d %lf",&matricula,&nota);
        if (nota>notaaluno)
        {
            notaaluno=nota;
            matriculaaluno = matricula;
        }
        quant--;
    }
    if (notaaluno>=8.0)
    {
        printf("%d\n",matriculaaluno);
    }
    else{
        printf("Minimum note not reached\n");
    }
}
