#include <iostream>
using namespace std;
//Programa para ilustrar opera��o com ponteiros

int main()
{
	int x=1; //declara e inicializa a variavel x
	int y=3; //declara e inicializa a variavel y
	int *xPtr; //declara xPtr como vari�vel ponteiro
	int *yPtr; //declara yPtr como vari�vel ponteiro
	
	xPtr = &x; //atribui o conte�do de x a xPtr
	yPtr = &y; //atribui o conte�do de y a yPtr
	cout << "\n\nValor inicial de x usando *xPtr = " << *xPtr;
	cout << "\nValor inicial de y sando *yPtr = " << *yPtr;
	
	*xPtr *= 10;
	*yPtr += 20;
	cout << "\n\nValor alterado de x usando *xPtr = " << *xPtr;
	cout << "\nValor alterado de y usando *yPtr = " << *yPtr;
	
	cout << "\n\nSoma de " << *xPtr << " + " << *yPtr << " = " << *xPtr + *yPtr;
	cout << endl << endl;
	
	system("PAUSE");
	return 0;
}
