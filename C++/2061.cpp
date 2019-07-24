#include <iostream>

using namespace std;

int main()
{
	int x,y;
	char operacao [50];
	cin >> x;
	cin >> y;

	while(y != 0)
	{
		cin >> operacao;
		if(operacao[0] == 'f')
		{
			x++;
		}
		else
		{
			x--;
		}
		y--;
	}

	cout << x <<endl;

	return 0;
}