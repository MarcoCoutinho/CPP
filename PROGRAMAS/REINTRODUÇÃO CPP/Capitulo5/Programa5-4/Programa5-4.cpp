#include <iostream>
#include <math.h>//Necessario para a fun��o acos(x)
using namespace std;
//Programa para ilustrar o retorno de uma fn��o
const double PI=acos(-1.0);//Fn��o arco cosseno

double areaCirclo(double raio)
{
	return PI*raio*raio;
}
int main()
{
	double areaCirculo(double r);
	double r;
	cout << "Digite o valor do raio do circulo: ";
	cin >> r;
	cout << "\nArea do circulo de raio: " << r << ": " << areaCirculo(r) << endl << endl;
	system("PAUSE");
	return 0;
}
