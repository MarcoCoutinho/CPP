#include <iostream>
using namespace std;
//Programa para ilstrar o uso do operador condicional

int main()
{
	int n;
	cout << "\nDigite um numero inteiro: ";
	cin >> n;//Entrada do usuário
	cout <<"Voce digitou um numero " << (n%2==0? "par":"impar") << endl << endl;
	system("PAUSE");
	return 0;
}
