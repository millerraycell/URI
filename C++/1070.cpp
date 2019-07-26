#include <iostream>

using namespace std;

int main()
{
    int valor, contador = 0;
    cin >> valor;
    while(contador < 6)
    {
        if(valor%2 != 0)
        {
            cout << valor << endl;
            contador++;
        }
        valor++;
    }
    return 0;
}
