#include <iostream>
#include <conio.h>
using namespace std;
//Programa para ilustrar a opera��o da funcao getche(

int main()
{
	int numCaracteres=0;
	int numPalavras = 1;//N�mero de espacos entre palavras
	char ch;
	cout << "Digite uma frase: ";
	while( (ch=getche())!= '\r') {//Loop at� que enter seja digitado
	if(ch==' ')//Testa se � espaco em branco
		numPalavras++;//Conta palavras
	else
		numCaracteres++;//Conta caracteres
	}
	cout << "\nNumero de palavras = " << numPalavras << endl << endl;
	cout << "Numero de caracteres = " << numCaracteres << endl << endl;
	system ("PAUSE");
	return 0;
}
