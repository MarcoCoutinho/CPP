#include <iostream>
using namespace std;
//Programa para ilustrar a criação de ma estrtra dentro da outra
struct medida{
	float metro;
	float centimetro;
};
struct terreno{
	medida comprimento;//Comprimento do terreno
	medida largura;//Largra do terreno
};
int main()
{
	terreno meuTerreno;
	meuTerreno.comprimento.metro=30;//Definição de valores
	meuTerreno.comprimento.centimetro=50;
	meuTerreno.largura.metro=60;
	meuTerreno.largura.centimetro=90;
	//converte valores para metros
	float comprimentoTerreno=meuTerreno.comprimento.metro + meuTerreno.comprimento.centimetro/100;
	float larguraTerreno=meuTerreno.largura.metro+meuTerreno.largura.centimetro/100;
	cout << "\nArea do terreno: " << comprimentoTerreno << " * " << larguraTerreno << " = " <<comprimentoTerreno * larguraTerreno << " metros quadrados\n\n";
	system("PAUSE");
	return 0;
}
