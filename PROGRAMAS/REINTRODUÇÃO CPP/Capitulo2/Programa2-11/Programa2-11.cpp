#include <iostream>
using namespace std;
//Programa para verificar faixa de valores suportados pelos tipos de dados
int main()
{
	short int varComSinal = 30000;//Signed short: -32768 to 32767
	unsigned short int varSemSinal = 30000;//unsigned dhort: 0 to 65535
	varComSinal = (varComSinal*5)/3;//Calculo varComSinal excede intervalo
	varSemSinal = (varSemSinal*5)/3;//Calculo varSemSinal não excede intervalo
	cout << "varComSinal = " << varComSinal << endl;// errado: -15536
	cout << "varSemSinal = " << varSemSinal << endl;//Certo:50000
	system("PAUSE");
	return 0;
}
