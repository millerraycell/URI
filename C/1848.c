#include<stdio.h>
#include<string.h>
int main()
{
    int num[3]={0,0,0},cont=0;
    char str[10];
    while (cont!=3)
    {
        gets(str);
        if(strcmp(str,"---")==0)
        {
            num[cont]+=0;
        }

        if(strcmp(str,"--*")==0)
        {
            num[cont]+=1;
        }
        if(strcmp(str,"-*-")==0)
        {
            num[cont]+=2;
        }
        if(strcmp(str,"-**")==0)
        {
            num[cont]+=3;
        }
        if(strcmp(str,"*--")==0)
        {
            num[cont]+=4;
        }
        if(strcmp(str,"*-*")==0)
        {
            num[cont]+=5;
        }
        if(strcmp(str,"**-")==0)
        {
            num[cont]+=6;
        }
        if(strcmp(str,"***")==0)
        {
            num[cont]+=7;
        }
        if(strcmp(str,"caw caw")==0)
        {
            cont+=1;
        }

    }
    printf("%d\n%d\n%d\n",num[0],num[1],num[2]);
    return 0;
}
