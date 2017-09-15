#include <iostream>
using namespace std;
//Programa para ilustrar a operação do loop for

int main()
{
	unsigned int n;//Declara variavel n
	unsigned long fatorial=1;//Declara variavel fatorial como do tipo long
	cout << "Digite um valor: ";
	cin >> n;//Ler o valor de n
		for(int i=n; i>0; i--)
	fatorial *=i;//Calcula fatorial de n
	cout << "Fatorial de " << n << " = " << fatorial << endl << endl;
	system("PAUSE");
	return 0;
}
