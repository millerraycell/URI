#include<stdio.h>
int main()
{
    int num,i;
    while (num!=0)
    {
        scanf("%d",&num);
        for (i = 1; i <= num; i++) {
            printf("%d%c", i, i == num ? '\n' : ' ');
        }
    }
    return 0;
}
