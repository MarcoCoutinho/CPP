#include <iostream>
using namespace std;
//Programa prar ilustrar a operação do if...else
int main()
{
	unsigned long n1, n2;
	cout << "Digite o primeiro número: ";
	cin >> n1; //Ler o primeiro número de entrada
	cout << "Digite o segundo número: ";
	cin >> n2; // Ler o segundo número de entrada
	if(n1>=n2) //Compara n1 e n2
 	cout << n1 << " >= " << n2 << endl << endl;
 	else
 	cout << n1 << " < " << n2 << endl << endl;
 	system("PAUSE");
 	return 0;
}
