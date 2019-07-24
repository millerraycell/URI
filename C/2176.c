#include<stdio.h>
#include<string.h>

int main()
{
    char k[110];
    int i,cont=0;
    scanf(" %[^\n]s",&k);
    for(i=0;i<strlen(k);i++)
    {
        if(k[i]=='1')
            cont++;
    }

    if (cont%2==0)
    {
        printf(k);
        printf("0\n");
    }
    else
    {
        printf(k);
        printf("1\n");
    }
    return 0;
}
