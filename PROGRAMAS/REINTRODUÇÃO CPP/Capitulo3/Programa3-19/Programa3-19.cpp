#include <iostream>
using namespace std;
//Programa para ilustrar o uso de express�es l�gicas

int main()
{
	unsigned int n1, n2;
	cout << "\nDigite um numero inteiro n1 = ";
	cin >> n1;//Entrada do usu�rio
	cout << "\nDigite um numero inteiro n2 = ";
	cin >> n2;//Entrada do usu�rio
	if ((n1%2==0 && n2%2==0) && (n1%3==0 && n2%3==0))
		cout << "\nVoce digitou numeros multiplos de 2 e 3 " << endl << endl;
	else
		cout << "\nOs numeros digitados nao sao multiplos de 2 e 3" << endl << endl;
	system("PAUSE");
	return 0;
}
