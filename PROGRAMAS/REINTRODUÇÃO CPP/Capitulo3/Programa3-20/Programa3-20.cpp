#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//Programa para ilustrar o uso do continue

int main()
{
	int min, max;
	double x, y;
	cout <<"\nDigite o valor min de f(x) = ";
	cin >> min;//Entrada do usuário
	cout <<"\nDigite o valor max de f(x) = ";
	cin >> max;//Entrada do usuário
	cout << "\nValor de x " << setw(11) << "Valor de f(x)" << endl;
	for (int i=min; i<=max; i++){
		if(i>-2 && i<2) {
			cout << setw(11) << i << setw(25) << "Valor não calculado" << endl;
			continue;
		}
		x=(double)i;
		y=sqrt(x*x-4);
		cout << setw(11) << x << setw(13) << y << endl;
	}
	system("PAUSE");
	return 0;
}
