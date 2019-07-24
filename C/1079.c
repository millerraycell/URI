#include<stdio.h>
int main()
{
    int cont;
    float a,b,c,media;
    scanf("%d",&cont);
    while (cont!=0)
    {
        scanf("%f %f %f",&a,&b,&c);
        media=((a*2)+(b*3)+(c*5))/10.0;
        printf("%.1f\n",media);
        cont--;
    }
    return 0;
}
