#include<stdio.h>
int main()
{
    int hi,hf,mi,mf,durah,duramin;
    scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
    if (hf!=hi && mf!=mi)
    {
        if (hf>hi)
        {
            durah = hf-hi;
        }

        else
        {
            durah = (hf+24)-hi;
        }
        if (mf>mi)
        {
            duramin = mf-mi;
        }
        else
        {
            duramin = (mf+60)-mi;
            durah -= 1;
        }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durah, duramin);
    }
    else{
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    return 0;
}
