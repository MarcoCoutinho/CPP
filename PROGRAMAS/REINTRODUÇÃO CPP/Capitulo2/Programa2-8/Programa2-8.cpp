#include <iostream>
using namespace std;
//Programa que mostra o uso de vari�veis tipo char
int main()
{
	char varChar1 = 'a';//Define vari�vel varChar1 como char
	char varChar2 = '\t';//Define vari�vel varChar2 como char
	char varChar3 = 'c';//Define vari�vel varChar3 como char
	cout << varChar1;//Exibe conte�do de varChar1
	cout << varChar2;//Exibe conte�do de varChar2
	varChar1 = 'B';//Atribui o caractere B a varChar1
	cout << varChar1;//Exibe conte�do de varChar1
	cout << '\n';//Exibe caractere newline ou quebra de linha
	cout << varChar3 << endl << endl;//Exibe conte�do de carChar3 e pula duas linhas
	system ("PAUSE");
	return 0;
}
