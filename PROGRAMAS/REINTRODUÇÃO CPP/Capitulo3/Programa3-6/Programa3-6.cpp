#include <iostream>
#include <iomanip>
using namespace std;
//Programa para ilustrar a opera��o do loop while

int main()
{
	int i=1;//Define e inicializa a variavel de loop
	int n;//Define variavel limite para itera��es no loop
	int fatorial=1;//Define e inicializa variavel fatorial
	cout << "Digite um valor: ";
	cin >> n;
	cout << "\nValor " << setw(5) << "Fatorial" << endl;
	while(i<=n){ //execta o loop de 1 at� n
 		cout << setw(5) << i;
 		fatorial*=i;
 		cout << setw(9) << fatorial << endl;
 		i++;
	}
	system("PAUSE");
	return 0;
}
