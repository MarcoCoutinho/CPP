#include <iostream>
#include <math.h>
using namespace std;
//Programa para ilustrar a operação do loop do
int main ()
{
	int i=1, n, fatorial =1;
	char entrada;
	do{
	cout << "\nDigite um valor: ";
	cin >> n;
	cout << "\nQuadrado de " << n << " = " << n*n << endl;
	cout << "\nRaiz quadrada de " << n << " = " << sqrt(n) << endl;
	cout << "\nDeseja repetir? (s/n)";
	cin >> entrada;
	} while (entrada != 'n');
	
	system("PAUSE");
	return 0;
}
