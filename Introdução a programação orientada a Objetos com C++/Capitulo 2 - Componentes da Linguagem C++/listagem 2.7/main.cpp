#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;

//programa que mostra regioes do mundo e n�mero de usu�rios da internet

int main()
{
	long usuarios1 = 4514400, usuarios2 = 114304000, usuarios3 = 105096093, usuarios4 = 3284800,
	usuarios5 = 108096800, usuarios6 = 18068919, usuarios7 = 7620480, usuariostotal = 360985492;
	
	cout << setw(20) << "Regiao do mundo " << setw(10) << "Numero de usuarios da internet em 2008" << endl
	<< setw(20) << "Africa " << setw(10) << usuarios1 << endl
	<< setw(20) << "Asia " << setw(10) << usuarios2 << endl
	<< setw(20) << "Europa " << setw(10) << usuarios3 << endl
	<< setw(20) << "Oriente Medio " << setw(10) << usuarios4 << endl
	<< setw(20) << "America do Norte " << setw(10) << usuarios5 << endl
	<< setw(20) << "America Latina " << setw(10) << usuarios6 << endl
	<< setw(20) << "Oceania e Australia " << setw(10) << usuarios7 << endl
	<< setw(20) << "Total de usuarios " << setw(10) << usuariostotal << endl << endl;
	system("PAUSE");
	return 0;
}
