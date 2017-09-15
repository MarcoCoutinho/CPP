#include <iostream>
using namespace std;
//Programa para ilustrar o uso do operador logico ||

int main ()
{
	int n1,n2;
	cout << "Digite um numero inteiro n1 = " << endl;
	cin >> n1;//Entrada do usuário
	cout << "Digite um numero inteiro n2 = " << endl;
	cin >> n2;//Entrada do usuário
	if (n1%3==0 || n2%3==0)
		cout <<"\nVoce digitou um numero multiplo de 3\n" << endl;
	else
		cout << "\nOs numeros digitados nao sao multiplos de 3\n" << endl;
	system("PAUSE");
	return 0;
}
