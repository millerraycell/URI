#include<stdio.h>
#include<string.h>
int main()
{
    char nome1[101],nome2[101],opc1[5],opc2[5];
    int x,y,n;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf(" %s %s %s %s",&nome1,&opc1,&nome2,&opc2);
        scanf("%d %d",&x,&y);
        if((x+y)%2 == 0)
        {
            printf("PAR");
            if(strcmp(opc1,"PAR") == 0)
            {
                printf("%s\n",nome1);
            }
            else
            {
                printf("%s\n",nome2);
            }
        }
        else
        {
            if(strcmp(opc1,"IMPAR") == 0)
            {
                printf("%s\n",nome1);
            }
            else
            {
                printf("%s\n",nome2);
            }
        }
        n--;
    }
    return 0;
}
