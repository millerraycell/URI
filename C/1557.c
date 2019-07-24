#include<stdio.h>
int main()
{
    int x,i,j;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {
            return 0;
        }
        int mat[x][x],cont=1,aux=1;
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                mat[i][j]=cont;
                cont*=2;
            }
            cont=aux*2;
            aux*=2;
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                printf("%d",mat[i][j]);
                if(j > 0)
	            {
	            	printf("\t");
	            }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
