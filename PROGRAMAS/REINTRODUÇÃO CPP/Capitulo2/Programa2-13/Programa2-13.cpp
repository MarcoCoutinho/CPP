#include <iostream>
using namespace std;
//Programa para forçar a conversão de tipos de dados

int main()
{
	short varComSinal=30000;//Signed short: -32768 to 32767
	cout << "Valor inicial de varComSinal = " << varComSinal << endl << endl;//Valor inicial 30000
	varComSinal += 30000;//Calculo de varComSinal exede intrvalo
	cout << "Valor errado de varComSinal = " << varComSinal << " sem usar o cast\n" << endl;//Errado: -5536
	varComSinal=30000;//Signed short: -32768 to 32767
	int varAposCast;
	varAposCast=(int)varComSinal;
	cout <<"Re-inicializado varComSinal = " << varComSinal << "Antes de usar cast\n" << endl;//Valor: 30000
	varAposCast+=30000;//calculo de varComSinal não exede intervalo com so de cast
	cout << "Valor final de varAposCast = " << varAposCast << " depois  de usar cast\n" << endl;//certo: 60000
	system ("PAUSE");
	return 0;
}
