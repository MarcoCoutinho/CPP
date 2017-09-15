#include <iostream>
using namespace std;
//Programa para ilustrar o uso tipo de dado enumerado

int main()
{
	enum diasDaSemana {seg, ter, qua, qui, sex, sab, dom };
	diasDaSemana dia1, dia2;
	dia1 = seg;
	dia2 = qua;
	int diferencaDias = dia2-dia1;
	cout << "Existe " << diferencaDias << " das entre seg e qua" << endl;
	if(dia1 < dia2)
		cout << "\nDia1 acontece antes de dia2\n\n";
	else
		cout << "\nDia2 acontece antes de dia1\n\n";
	system("PAUSE");
	return 0;
}
