#include <iostream>

using namespace std;

int main()
{
	int numCasos = 0;

	cin >> numCasos;

	for (; numCasos > 0; --numCasos)
	{
		int numDecimos = 0;

		cin >> numDecimos;
		int decimo = 0, cont = 0;

		for (; numDecimos > 0; --numDecimos)
		{
			cin >> decimo;
			if (decimo % 2 == 0){
				++cont;
			}
		}

		cout << cont << endl;
	}

	return 0;
}
