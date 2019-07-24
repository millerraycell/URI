#include<stdio.h>
int main()
{
    int inicio,fim,dur;
    scanf("%d %d",&inicio,&fim);
    dur=fim-inicio;
    if (dur==0)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if (dur<0)
    {
        printf("O JOGO DUROU %d HORA(S)\n",dur+24);
    }
    if (dur>0)
    {
        printf("O JOGO DUROU %d HORA(S)\n",dur);
    }
    return 0;
}
