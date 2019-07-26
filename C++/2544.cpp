#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        int cont = 0;
        while(x!=1)
        {
            x/=2;
            cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
