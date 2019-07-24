#include<stdio.h>
int main()
{
    int i,j,num,cont=0.0;
    float mat[12][12];
    char opc;
    scanf("%d",&num);
    scanf(" %c",&opc);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&mat[i][j]);
        }
    }
    if(opc=='S')
    {
        for(j=0;j<12;j++)
        {
            cont += mat[num][j];
        }
        printf("%.1f\n",cont);
    }
    else
    {
        for(j=0;j<12;j++)
        {
            cont += mat[num][j];
        }
        printf("%.1f\n",cont/12.0);
    }
    return 0;
}
