#include <iostream>
using namespace std;
//Programa para ilustrar o uso de expressões lógicas

int main()
{
	unsigned int n1, n2;
	cout << "\nDigite um numero inteiro n1 = ";
	cin >> n1;//Entrada do usuário
	cout << "\nDigite um numero inteiro n2 = ";
	cin >> n2;//Entrada do usuário
	if ((n1%2==0 && n2%2==0) && (n1%3==0 && n2%3==0))
		cout << "\nVoce digitou numeros multiplos de 2 e 3 " << endl << endl;
	else
		cout << "\nOs numeros digitados nao sao multiplos de 2 e 3" << endl << endl;
	system("PAUSE");
	return 0;
}
