#include <iostream>
using namespace std;
//Programa para ilustrar o uso do operador módulo (%)

int main()
{
	int x=10;
	cout << "Valor inicial de x : " << x << endl;//Mostra x=10
	cout << "Resultado após ++x : " << ++x << endl;//Mostrra x=11
	cout << "Valor seguinte de x: " << x << endl;//Mostra x=11
	cout << "Resultado apos x++ : " << x++ << endl;//Mostra x=11
	cout << "valor seguinte de x: " << x << endl;//Mostra x=12
	cout << "Resultado apos --x : " << --x << endl << endl;//mostra x=11
	system("PAUSE");
	return 0;
}
