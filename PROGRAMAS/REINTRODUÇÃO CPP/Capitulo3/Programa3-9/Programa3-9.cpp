#include <iostream>
using namespace std;
//Programa para ilustrar a operação do loop aninhados

int main()
{
	unsigned long n,i;
	cout << "Digite um valor: ";
	cin >> n;//Ler m valor de entrada
	for(i=2; i<=n/2; i++)//realiza divisões scessivas por 2
	if(n%i==0) {//Se o resto é igual a 0, então n é divisivel por i
		cout << n << " nao e um numero primo" << endl << endl;
		system("PAUSE");
		return 0;
	}
	cout << n << " e um numero primo" << endl << endl;
	system("PAUSE");
	return 0;
}
