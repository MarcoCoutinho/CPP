#include <iostream>
using namespace std;
//Programa para ilustrar a operação do loop if

int main()
{
	int n;//Define variavel limite para iterações no loop
	cout << "\nDigite um valor: ";
	cin >> n;
	if (n%3==0){
		cout << "\nO valor " << n << " ue voce digitou e multiplo de 3" << endl;
		cout << "e tem resto " << n%3 << endl << endl;
 	}
 	system("PAUSE");
 	return 0;
}
