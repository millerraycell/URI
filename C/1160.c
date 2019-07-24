#include<stdio.h>
int main()
{
    int pa,pb,testes,cont=0;
    double ta,tb;
    scanf("%d",&testes);
    while(testes!=0)
    {
        scanf("%d %d %lf %lf",&pa,&pb,&ta,&tb);
        while(pa<pb)
        {
            pa += (pa*(ta100))
            cont++;
            if (cont>100)
            {
                break;
            }
        }
        if (cont<=100)
        {
            printf("%d anos.\n",cont);
        }
        else
        {
            printf("Mais de 1 seculo.\n");
        }
        cont = 0;
        testes--;
    }
    return 0;
}
