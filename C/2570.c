#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,k,pos,cont=1,i,j;
    scanf("%d %d %d",&n,&m,&k);
    int **mat = (int**)malloc(m*sizeof(int));
    char opc[1];
    for(i = 0; i < n ; i++)
    {
        mat[i] = (int*)malloc(n*sizeof(int));
        for(j = 0; j < m; j++)
        {
            mat[i][j] = 0;
        }
    }
    while (k!=0)
    {
        scanf(" %s %d", opc, &pos);
        if(opc[0] == 'L')
        {
            if(cont == 1)
            {
                for(i = 0 ; i < n ; i++)
                    mat[pos-1][i] = 1;
            }
            if(cont == 2)
            {
                for(i = 0 ; i < n ; i++)
                    mat[pos-1][i] = 2;
            }
            if(cont == 3)
            {
                for(i = 0 ; i < n ; i++)
                    mat[pos-1][i] = 3;
            }
            if(cont == 4)
            {
                for(i = 0 ; i < n ; i++)
                    mat[pos-1][i] = 4;
            }
        }
        else
        {
            if(cont == 1)
            {
                for(i = 0 ; i < m ; i++)
                    mat[i][pos-1] = 1;
            }
            if(cont == 2)
            {
                for(i = 0 ; i < m ; i++)
                    mat[i][pos-1] = 2;
            }
            if(cont == 3)
            {
                for(i = 0 ; i < m ; i++)
                    mat[i][pos-1] = 3;
            }
            if(cont == 4)
            {
                for(i = 0 ; i < m ; i++)
                    mat[i][pos-1] = 4;
            }
        }
        cont++;
        if(cont > 4)
        {
            cont = 1;
        }
        k--;
    }
    int contr=0,conth=0,contc=0,contp=0;
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < m ; j++)
        {
            if(mat[i][j] == 1)
            {
                contr++;
            }
            if(mat[i][j] == 2)
            {
                conth++;
            }
            if(mat[i][j] == 3)
            {
                contc++;
            }
            if(mat[i][j] == 4)
            {
                contp++;
            }
        }
    }
    printf("R%d H%d C%d P%d\n",contr,conth,contc,contp);
    return 0;
}
