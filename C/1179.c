#include<stdio.h>
int main()
{
    int par[5],impar[5],num,i,a=0,b=0,j,k,aux1=0,aux2=0;
    for (i=0;i<=14;i++)
    {
        scanf("%d",&num);
        if (num%2==0)
        {
           par[a] = num;
           a++;
        }
        else
        {
            impar[b] = num;
            b++;
        }
        if(a==5)
        {
            for(j=0;j<=4;j++)
            {
                printf("par[%d] = %d\n",j,par[j]);
            }
            a=0;
        }
        if (b==5)
        {
            for (k=0;k<=4;k++)
            {
                printf("impar[%d] = %d\n",k,impar[k]);
            }
            b=0;
        }
    }
    return 0;
}
