#include <iostream>
using namespace std;
//Programa que mostra o uso de variáveis tipo char
int main()
{
	char varChar1 = 'a';//Define variável varChar1 como char
	char varChar2 = '\t';//Define variável varChar2 como char
	char varChar3 = 'c';//Define variável varChar3 como char
	cout << varChar1;//Exibe conteúdo de varChar1
	cout << varChar2;//Exibe conteúdo de varChar2
	varChar1 = 'B';//Atribui o caractere B a varChar1
	cout << varChar1;//Exibe conteúdo de varChar1
	cout << '\n';//Exibe caractere newline ou quebra de linha
	cout << varChar3 << endl << endl;//Exibe conte´do de carChar3 e pula duas linhas
	system ("PAUSE");
	return 0;
}
