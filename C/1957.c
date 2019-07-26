#include <stdio.h>

int main()
{
    unsigned long long int num;
    scanf("%llu", &num);
    printf("%X\n",num & 0xFFFFFFFFFFFFFF);
    return 0;
}
