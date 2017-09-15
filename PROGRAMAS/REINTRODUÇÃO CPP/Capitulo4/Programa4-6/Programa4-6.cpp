#include <iostream>
#include <conio.h>//Para a fn��o getche()
using namespace std;
//Programa para ilustrar o uso de tipo de dado enumerado

int main()
{
	enum meuBoolean {falso, verdadeiro};
	meuBoolean palavra = falso;//Falso  quando encontrar espa�o em branco
	char ch = 'x';//ch = caractere digitado pelo usu�rio
	int contadorPalavra = 0;//Contador de palavras
	cout << "Digite uma frase: ";
	do {
		ch = getche();//Ler dados digitados pelo usu�rio
		if(ch==' ' || ch=='\r') {//Tersta se espa�o em branco
			if(palavra){//Se palavra
				contadorPalavra++;//Ent�o, conta (incremente) contadorPalavra
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
