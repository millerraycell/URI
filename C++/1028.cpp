#include<iostream>

using namespace std;

int mdc(int a, int b)
{
    if(b == 0)
        return a;
    else
        return mdc(b, a%b);
}

int main()
{
    int quantidade;
    cin >> quantidade;
    while(quantidade--)
    {
        int x,y;
        cin >> x >> y;
        cout << mdc(x,y) << endl;
    }
    return 0;
}
