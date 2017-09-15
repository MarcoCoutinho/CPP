#include <iostream>
using namespace std;
//Programa para ilustrar a inicialização de estrutura
struct data{
	int dia;
	int mes;
	int ano;
};

int main()
{
	data hoje = {25, 12, 2009};
	data novaData;
	cout << "\nData de hoje informada: " << hoje.dia << " / " << hoje.mes << " / " << hoje.ano << endl;
	novaData = hoje;
	cout << "\nNova data informada: " << hoje.dia << " / " << hoje.mes << " / " << hoje.ano << endl << endl;
	system("PAUSE");
	return 0;
}
