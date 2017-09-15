#include <iostream>
using namespace std;
//Programa para determinar o volume de uma esfera de raio informado pelo usuario

int main()
{
	system ("cls");//Limpa a tela
	system ("color F0");//Torna a cor de fundo branca e as letras pretas
	const float PI=3.14159;
	int raio;
	cout << "Digite o raio (de valor inteiro) da esfera: ";
	cin >> raio;//Solicita o valor do raio
	double volume = 4.0/3.0*PI*raio*raio*raio;//Fórmula para volume da esfera
	cout << "O volme da esfera de raio " << raio << "cm= " << volume << "\n\n";//Exibe o valor calculado do volme da esfera
	system ("PAUSE");
	return 0;
}
