#include <iostream>
#include <iomanip>
using namespace std;
//programa que mostra regiões do mundo e númro de usuários da internet

int main()
{
	long usuarios1 = 4514400, usuarios2 = 114304000, usuarios3 = 10509693, usuarios4 = 3284800, usuarios5 = 108096800, usuarios6 = 18068919, usuarios7 = 7620480, usuariosTotal = 360985492;
	cout << "Região do mundo " << "Número de usuários da Internet em 2008" << endl
	<< "Africa " << usuarios1 << endl 
	<< "Asia " << usuarios2 << endl 
	<< "Europa " << usuarios3 << endl 
	<< "Oriente Médio " << usuarios4 << endl 
	<< "América do Norte " << usuarios5 << endl
	<< "America Latina " << usuarios6 << endl
	<< "Oceania e australia " << usuarios7 << endl
	<< "Total de usuarios " << usuariosTotal << endl << endl;
	system ("PAUSE");
	return 0;
}
