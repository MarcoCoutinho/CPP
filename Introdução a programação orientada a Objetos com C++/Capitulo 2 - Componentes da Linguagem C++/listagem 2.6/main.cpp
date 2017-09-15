#include <iostream>

using std::cout;
using std::endl;

//programa que mostra regioes do mundo e número de usuários da internet

int main()
{
	long usuarios1 = 4514400, usuarios2 = 114304000, usuarios3 = 105096093, usuarios4 = 3284800,
	usuarios5 = 108096800, usuarios6 = 18068919, usuarios7 = 7620480, usuariostotal = 360985492;
	
	cout << "Região do mundo " << "Número de usuários da internet em 2008" << endl
	<< "Africa " << usuarios1 << endl
	<< "Asia " << usuarios2 << endl
	<< "Europa " << usuarios3 << endl
	<< "Oriente Medio " << usuarios4 << endl
	<< "America do Norte " << usuarios5 << endl
	<< "America Latina " << usuarios6 << endl
	<< "Oceania e Australia " << usuarios7 << endl
	<< "Total de usuarios " << usuariostotal << endl << endl;
	system("PAUSE");
	return 0;
}
