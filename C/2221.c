#include<stdio.h>

int main()
{
    int quantidade;
    scanf("%d",&quantidade);
    while(quantidade--)
    {
        int ataque1,defesa1,nivel1;
        int ataque2,defesa2,nivel2;
        int bonus;

        scanf("%d",&bonus);
        scanf("%d %d %d",&ataque1,&defesa1,&nivel1);
        scanf("%d %d %d",&ataque2,&defesa2,&nivel2);

        int valor_golpe1 = (ataque1+defesa1)/2;
        int valor_golpe2 = (ataque2+defesa2)/2;

        if(nivel1%2 == 0)
        {
            valor_golpe1+=bonus;
        }
        if(nivel2%2 == 0)
        {
            valor_golpe2+=bonus;
        }

        if(valor_golpe1 > valor_golpe2)
        {
            printf("Dabriel\n");
        }
        else if(valor_golpe2 > valor_golpe1)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }
    }
}
