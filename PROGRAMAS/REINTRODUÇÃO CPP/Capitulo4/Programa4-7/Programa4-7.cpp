#include <iostream>
using namespace std;
//Programa para ilustrar o so de tipo de dado enumerado

int main()
{
	enum diasDaSemana{seg=3, ter, qua, qui, sex, sab, dom};
	
	cout << "Lista de dias e valores inicializados:\n\n";
	cout << "seg = " << seg << endl;
	cout << "ter = " << ter << endl;
	cout << "qua = " << qua << endl;
	cout << "qui = " << qui << endl;
	cout << "sex = " << sex << endl;
	cout << "sab = " << sab << endl;
	cout << "dom = " << dom << endl << endl;
	system("PAUSE");
	return 0;
}
