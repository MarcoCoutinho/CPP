#include <iostream>
using namespace std;
//Programa para determinar o volume de uma esfera de raio informado pelo usuario
int main()
{
	const float PI=3.14159;
	float volume, raio;
	cout << "Digite o raio da esfera: ";
	cin >> raio;//Solicita o valor do raio
	volume = 4.0/3.0*PI*raio*raio*raio;//Fórmula para volume da esfera
	//Exibe o valor calculado do volume da esfera
	cout << "O volme de uma esfera de raio " << raio << "cm = " << volume << "\n\n";
	system("PAUSE");
	return 0; 
}
