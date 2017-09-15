#include <iostream>
#define PI 3.141593

//Programa para determinar o volume de uma esfera de raio 5cm.
int main()
{
	double volume, raio;
	raio = 5.0;//definição do valor do raio
	volume = 4.0/3.0*PI*raio*raio*raio;//Fórmula do volume da esfera
	
	//Exibe na tela o valor calculado do volume da esfera
	std::cout << "O volume de uma esfera de raio 5cm = " << volume << "\n\n";
	system("PAUSE");
	return 0;
}
