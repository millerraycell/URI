#include <stdio.h>
#include <string.h>

int main()
{
    char x[20];
    while(scanf(" %[^\n]s",x) != EOF)
    {
        if(strcmp(x,"esquerda") == 0)
        {
            printf("ingles\n");
        }
        else if(strcmp(x,"direita") == 0)
        {
            printf("frances\n");
        }
        else if(strcmp(x,"nenhuma") == 0)
        {
            printf("portugues\n");
        }
        else
        {
            printf("caiu\n");
        }
    }


}
