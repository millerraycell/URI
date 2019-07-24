#include<stdio.h>
unsigned long long int fib(unsigned long long int n)
{
    unsigned long long int i = 0;
    unsigned long long int j = 1;
    for (unsigned long long int k = 1; k < n; k++)
    { 
        unsigned long long int t;
        t = i + j;
        i = j;
        j = t;
    }

    return j;
}
int main()
{
    unsigned long long int n,x;
    while(scanf("%llu %llu",&n,&x)!=EOF)
    {
        printf("%llu\n",fib(fib(n))%x);
    }

    return 0;
}
