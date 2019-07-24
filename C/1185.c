#include<stdio.h>
int main()
{
    double mat[12][12];
    float som=0.0;
    int i,j;
    char s;
    scanf("%c",&s);
    for (i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&mat[i][j]);
        }
    }
    for (i=0;i<12;i++)
    {
        for(j=0;i+j!=11;j++)
        {
            som+=mat[i][j];
        }
    }

    if(s=='S')
    {
        printf("%.1f\n",som);
    }
    if(s=='M')
    {
        printf("%.1f\n",som/66);
    }
    return 0;
}
