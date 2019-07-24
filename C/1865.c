#include<stdio.h>
#include<string.h>
int main()
{
    int t,forca;
    char nome[20];
    scanf("%d",&t);
    while(t!=0)
    {
        scanf(" %s %d",&nome,&forca);
        if(strcmp(nome,"Thor")==0)
        {
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
        t--;
    }
    return 0;
}
