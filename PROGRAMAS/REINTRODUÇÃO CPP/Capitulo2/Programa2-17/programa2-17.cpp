#include <iostream>
#include <math.h> //para a fun��o sqrt()
using namespace std;
// programa para ilustrar o uso de bliblioteca
int main()
{
	double n, raiz;
	cout << "Digite um n�mro: "; //Solicita o usuario digitar um n�mero
	cin >> n; // ler o n�mero digitado
	raiz = sqrt(n); //Obt�m a raiz quadrada de n
	cout << "Raiz quadrada = " << raiz << endl << endl;
	system ("PAUSE");
	return 0;
}
