#include <iostream>
using namespace std;
//Programa prar ilustrar a opera��o do if...else
int main()
{
	unsigned long n1, n2;
	cout << "Digite o primeiro n�mero: ";
	cin >> n1; //Ler o primeiro n�mero de entrada
	cout << "Digite o segundo n�mero: ";
	cin >> n2; // Ler o segundo n�mero de entrada
	if(n1>=n2) //Compara n1 e n2
 	cout << n1 << " >= " << n2 << endl << endl;
 	else
 	cout << n1 << " < " << n2 << endl << endl;
 	system("PAUSE");
 	return 0;
}
