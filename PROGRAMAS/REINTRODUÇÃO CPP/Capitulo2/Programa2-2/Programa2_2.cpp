#include <iostream>
#define PI 3.14159
//Programa para achar a area do circulo

int main() {
	double area, raio;
	raio = 2;
	area = PI*(raio*raio); //fórmula para achar a area do circulo
	
	std::cout << "a area do circulo com raio " << raio << " = " << area << "\n\n";
	system("PAUSE");
	return 0;
}
