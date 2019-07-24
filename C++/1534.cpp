#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int x,i,j;
    while(scanf("%d",&x) != EOF)
    {
        int mat[x][x];
        for(i = 0; i < x; i++)
        {
            for(j = 0; j < x; j++)
            {
                if(i+j == x-1)
                {
                    mat[i][j] = 2;
                }
                else if(i == j)
                {
                    mat[i][j] = 1;
                }
                else{
                    mat[i][j] = 3;
                }
            }
        }

        for(i = 0; i < x; i++)
        {
            for(j = 0; j < x; j++)
            {
                printf("%d",mat[i][j]);
            }
            printf("\n");
        }

    }
}
