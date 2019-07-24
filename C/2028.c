#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n == 0)
        return 1;
    else if(n == 1)
        return 2;
    else
        return fib(n)*fib(n-1);
}

int main()
{
    printf("%d\n",fib(3));
    return 0;
}
