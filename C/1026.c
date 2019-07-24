#include<stdint.h>
#include<stdio.h>
int main()
{
    int32_t x=0,y=0;
    while(scanf("%u %u",&x,&y) != EOF)
    {
        if(x%2==0 && y%2==0)
        {
            if(x+y-8>0)
            {
                printf("%d\n",x+y-8);
            }
            else
            {
                printf("0\n");
            }

        }
        else{
            printf("%d\n",x+y);
        }

    }
    return 0;
}
