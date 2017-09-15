#include <iostream>
using namespace std;
//Programa para ilustrar o uso de função

int soma(int x, int y) {
	cout <<"\nFunção soma recebendo os valores " << x << " e " << y << endl;
	return (x+y);
}
int main(){
	int a, b, c;
	cout << "Digite um valor inteiro: ";
	cin >> a;
	cout << "\nDigite outro valor inteiro: ";
	cin >> b;
	c = soma(a, b);
	cout << "\nChamando funcao soma...";
	cout << "\nValor retornado pela funcao soma de " << a << " + " << b << " = " << c << endl << endl;
	system("PAUSE");
	return 0;
}
