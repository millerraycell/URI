#include<stdio.h>
int main()
{
    int dia,mes;
    static int natd = 25, natm=12;
    while(scanf("%d %d",&mes,&dia)!=EOF)
    {
        if(mes==12 && dia==25)
            printf("E natal!\n");
        if(mes==12 && dia==24)
            printf("E vespera de natal!\n");
        if(mes==12 && dia>25)
            printf("Ja passou!\n");
        else
        {
            dia -= natd;
        }
    }
    return 0;
}
