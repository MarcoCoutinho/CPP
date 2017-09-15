#include <iostream>
#include <conio.h>
using namespace std;
//Programa para ilustrar o uso de mltiplas estrtras de controle

int main()
{
	char entrada='z';
	int x=0, y=0;
	cout <<"Digite n(norte), s (sul), l(leste), o(oeste) ou tecle enter para finalizar\n";
	while(entrada!='\r'){//Executar ate enter ser digitado
		cout << "\nPosicao = [" << x << ", " << y << "]" << endl;
		cout << "\nDigite n(norte), s (sul), l(leste), o(oeste) ou tecle enter para finalizar\n";
		cout << "\nDirecao = ";
		entrada = getche();//Ler entrada
		if(entrada=='n')//Direção norte
			y++;
		else if (entrada=='s')//Direção sul
	 		y--;
		else if (entrada=='l')//Direção leste
			x++;
		else if (entrada=='o')//Direção oeste
			x--;
	}
	system("PAUSE");
	return 0;
}
