#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,media,exame,mediafinal;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1f\n",media);
    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
        if (media >=5.0 && media<=6.9){
            printf("Aluno em exame.\n");
            scanf("%f",&exame);
            printf("Nota do exame: %.1f\n",exame);
            mediafinal = (media+exame)/2.0;
            if (mediafinal >= 5.0)
            {
                printf("Aluno aprovado.\n");
            }
            if (mediafinal <= 4.9)
            {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n",mediafinal);
            }
   return (0);
}
