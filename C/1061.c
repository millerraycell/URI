#include<stdio.h>
int main()
{
    int dia,hora,min,sec,diai,diaf,hi,mi,si,hf,mf,sf;
    char aaa[5];
    scanf("%s %d",&aaa,&diai);
    scanf("%d : %d : %d",&hi,&mi,&si);
    scanf("%s %d",&aaa,&diaf);
    scanf("%d : %d : %d",&hf,&mf,&sf);
    dia = diaf-diai;
    if (hf>=hi)
    {
        hora=hf-hi;
    }
    if (hf<hi)
    {
        hora=(hf+24)-hi;
        dia-=1;
    }
    if (mf>=mi)
    {
        min=mf-mi;
    }
    if (mf<mi)
    {
        min=(mf+60)-mi;
    }
    if (sf>=si)
    {
        sec=sf-si;
    }
    if (sf<si)
    {
        sec=(sf+60)-si;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dia,hora,min,sec);
    return 0;
}
