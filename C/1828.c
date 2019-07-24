#include<stdio.h>
#include<string.h>
int main()
{
    int t,ganhador,perdedor,cont=1;
    char x[10],y[10];
    scanf("%d",&t);
    while(cont!=t+1)
    {
        scanf(" %s %s",&x,&y);
        printf("Caso %d: ",cont);
        if(strcmp(x,y)==0)
        {
            printf("De novo!\n");
        }


        if(strcmp(x,"tesoura")==0 && strcmp(y,"papel")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"papel")==0 && strcmp(y,"tesoura")==0)
        {
            printf("Raj trapaceou!\n");
        }


        if(strcmp(x,"papel")==0 && strcmp(y,"pedra")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"pedra")==0 && strcmp(y,"papel")==0)
        {
            printf("Raj trapaceou!\n");
        }


        if(strcmp(x,"pedra")==0 && strcmp(y,"lagarto")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"lagarto")==0 && strcmp(y,"pedra")==0)
        {
            printf("Raj trapaceou!\n");
        }


        if(strcmp(x,"lagarto")==0 && strcmp(y,"Spock")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"Spock")==0 && strcmp(y,"lagarto")==0)
        {
            printf("Raj trapaceou!\n");
        }


        if(strcmp(x,"Spock")==0 && strcmp(y,"tesoura")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"tesoura")==0 && strcmp(y,"Spock")==0)
        {
            printf("Raj trapaceou!\n");
        }

        if(strcmp(x,"tesoura")==0 && strcmp(y,"lagarto")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"lagarto")==0 && strcmp(y,"tesoura")==0)
        {
            printf("Raj trapaceou!\n");
        }


        if(strcmp(x,"lagarto")==0 && strcmp(y,"papel")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"papel")==0 && strcmp(y,"lagarto")==0)
        {
            printf("Raj trapaceou!\n");
        }

        if(strcmp(x,"papel")==0 && strcmp(y,"Spock")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"Spock")==0 && strcmp(y,"papel")==0)
        {
            printf("Raj trapaceou!\n");
        }


        if(strcmp(x,"Spock")==0 && strcmp(y,"pedra")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"pedra")==0 && strcmp(y,"Spock")==0)
        {
            printf("Raj trapaceou!\n");
        }

        if(strcmp(x,"pedra")==0 && strcmp(y,"tesoura")==0)
        {
            printf("Bazinga!\n");
        }
        if(strcmp(x,"tesoura")==0 && strcmp(y,"pedra")==0)
        {
            printf("Raj trapaceou!\n");
        }
        cont++;
    }
    return 0;
}
