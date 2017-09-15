#include <iostream>
#include <conio.h>
using namespace std;
//Programa para ilustrar o so de multiplas estruturas de controle
int main()
{
	system("cls");//Limpa a tela
	system("color f0");//Torna cor de fundo branca e as letras pretas
	char entrada='z';
	int x=0, y=0;
	cout << "Digite n(norte), s (sul), l(leste), o(oeste) ou tecle enter para finalizar\n";
	while( entrada!='\r'){
		cout << "\nPosicao = [" << x << ", " << y << "]" << endl;
		cout << "\nDigite n(norte), s (sul), l(leste), o(oeste) ou tecle enter para finalizar\n";
		cout << "\nDirecao = ";
		entrada = getche();//Ler entrada
		if( entrada=='n')//Direção norte
			y++;
		else
			if(entrada=='s')//Direção sul
				y--;
		else
			if(entrada=='l')//Direção leste
				x++;
		else
			if(entrada=='o')//Direção oeste
			x--;
	}
	system("PAUSE");
	return 0;
}
