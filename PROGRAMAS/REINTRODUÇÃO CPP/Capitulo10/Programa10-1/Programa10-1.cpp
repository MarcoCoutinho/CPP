#include <iostream>
using namespace std;
//Programa para ilustrar o acesso a endere�o de variaveis

int main()
{
	
	int x = 11; //declara��o e inicializa��o de variaveis 
	int y = 22;
	cout << "\nValor de x = " << x;
	cout << "\nValor de y = " << y;
	cout << "\nEndereco de x = " << &x;
	cout << "\nEndereco de y = " << &y;
	cout << endl << endl;
	system ("PAUSE");
	return 0;
}
