#include<stdio.h>
int main()
{
    long long int n,reverse=0;
    int i;
    scanf("%llu",&n);

   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n= n/10;
   }
   printf("%llu");
    return 0;
}
