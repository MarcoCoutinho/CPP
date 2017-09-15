#include <iostream>
using namespace std;
//Programa para ilustrar uso de ponteiros

int main()
{
	int x=11; //declara e inicializa a variavel x
	int y=22; //declara e inicializa a variavel y
	cout << "\nValor de x = " << x;
	cout << "\nValor de y = " << y;
	
	int *xPtr; //declara xPtr como variável ponteiro
	int *yPtr; //declara yPtr como variável ponteiro
	xPtr = &x; //atribui o conteúdo de x a xPtr
	yPtr = &y; //atribui o conteúdo de y a yPtr
	
	cout << "\n\nEndereco de x = " << &x;
	cout << "\nEndereco de y = " << &y;
	cout << "\n\nValor de xPtr = " << xPtr;
	cout << "\nValore de yPtr = " << yPtr;
	cout << "\n\nValor de *xPtr = " << *xPtr;
	cout << "\nValor de *yPtr = " << *yPtr;
	cout << endl << endl;
	system("PAUSE");
	return 0;
}
