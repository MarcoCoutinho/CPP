#include <iostream>
using namespace std;
//Programa para ilustrar o uso de estrutura
struct {//Não é feito uso de rótulo (ou tag)
	int dia;
	int mes;
	int ano;
}hoje;//Definição da estrutura ocorre aqui
int main()
{
	cout << "Digite o dia de hoje: ";
	cin >> hoje.dia;
	cout << "Digite o mes atual: ";
	cin >> hoje.mes;
	cout << "Digite o ano atual: ";
	cin >> hoje.ano;
	cout << "\nData de hoje informada: " << hoje.dia << " / " << hoje.mes << " / " << hoje.ano << endl << endl;
	system ("PAUSE");
	return 0;
}
