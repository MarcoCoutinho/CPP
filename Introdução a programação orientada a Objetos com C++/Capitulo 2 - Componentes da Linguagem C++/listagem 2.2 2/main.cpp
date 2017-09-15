#include <iostream>
#define PI 3.141593

//Programa para determinar o volume de uma esfera de raio 5cm.
int main()
{
	double area, raio;
	raio = 4.0;//definição do valor do raio
	area = PI*(raio*raio);//Fórmula da area do circulo
	
	//Exibe na tela o valor calculado do volume da esfera
	std::cout << "O volume de uma esfera de raio 5cm = " << area << "\n\n";
	system("PAUSE");
	return 0;
}
