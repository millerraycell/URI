#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    while (n!=0)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
        printf("%d %d %d\n",i,(i*i)+1,(i*i*i)+1);
        i+=1;
        n--;
    }
    return 0;
}
