#include <iostream>
#include <conio.h>//Para a fnção getche()
using namespace std;
//Programa para ilustrar o uso de tipo de dado enumerado

int main()
{
	enum meuBoolean {falso, verdadeiro};
	meuBoolean palavra = falso;//Falso  quando encontrar espaço em branco
	char ch = 'x';//ch = caractere digitado pelo usuário
	int contadorPalavra = 0;//Contador de palavras
	cout << "Digite uma frase: ";
	do {
		ch = getche();//Ler dados digitados pelo usuário
		if(ch==' ' || ch=='\r') {//Tersta se espaço em branco
			if(palavra){//Se palavra
				contadorPalavra++;//Então, conta (incremente) contadorPalavra
				palavra = falso;//Reinicializa palavra como falso
			}
		}
		else
		if(!palavra)
			palavra = verdadeiro;
	}while(ch!='\r');//finaliza programa
	
	cout << "\nNmero de palavras contadas: " << contadorPalavra << endl << endl;
	system ("PAUSE");
	return 0;
	
}
