#include<stdio.h>
int main()
{
    int cont,num,a=0,b=0;
    scanf("%d",&cont);
    while (cont!=0)
    {
        scanf("%d",&num);
        if (10<=num && num<=20)
        {
            a++;
        }
        if (num<10 || num>20)
        {
            b++;
        }
        cont--;
    }
    printf("%d in\n%d out\n",a,b);
}
