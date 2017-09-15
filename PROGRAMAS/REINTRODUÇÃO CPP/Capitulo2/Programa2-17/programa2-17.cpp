#include <iostream>
#include <math.h> //para a função sqrt()
using namespace std;
// programa para ilustrar o uso de bliblioteca
int main()
{
	double n, raiz;
	cout << "Digite um númro: "; //Solicita o usuario digitar um número
	cin >> n; // ler o número digitado
	raiz = sqrt(n); //Obtém a raiz quadrada de n
	cout << "Raiz quadrada = " << raiz << endl << endl;
	system ("PAUSE");
	return 0;
}
