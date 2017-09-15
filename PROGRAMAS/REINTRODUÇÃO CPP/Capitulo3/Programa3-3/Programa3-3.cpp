#include <iostream>
#include <iomanip>
using namespace std;
//Prorama para ilustrar a operação do loop for
int main()
{
	int i;//Define a variavel de loop
	int n;//Define variavel limite para iterações no loop
	
	cout << "Digite um valor: ";
	cin >> n;
	cout << "\nValor " << setw(5) << "Quadrado" << endl;
	for(i=1; i<=n; i++) { //executa o loop de 1 ate n
		cout << setw(5) << i;
		int n2 = i*i;//Define variável n2 qe recebe o quadrado de n
		cout << setw(9) << n2 << endl; 
	}
	system("PAUSE");
	return 0;
}
