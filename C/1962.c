#include<stdio.h>
int main()
{
    int ano, cont,x;
    scanf("%d",&cont);
    while(cont!=0)
    {
        scanf("%d",&ano);
        if(ano == 2015)
        {
            printf("1 A.C.\n");
        }
        if (ano>2015)
        {
            x=ano - 2014;
            printf("%d A.C.\n",x);
        }
        if(ano<2015)
        {
            x = 2015-ano;
            printf("%d D.C.\n",x);
        }
        cont--;
    }
    return 0;
}
