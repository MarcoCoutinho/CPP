#include <iostream>
using namespace std;
//Programa para ilustrar defini��o de ma classe
class minhaClasse //Especifica��o de ma classe
{
	private:
		int x;
	public:
		void setValor(int d) //fun��o membro
		{ x=d; }
		void mostraValor() //fun��o membro
		{cout << "\nValor = " << x << endl; }
};
int main ()
{
	minhaClasse obj1, obj2; //declara��o de 2 objetos
	obj1.setValor(11); //chamada a fun��o membro para definir os valores
	obj2.setValor(22);
	obj1.mostraValor(); //chamada a fun��o membro para mostrar valores
	obj2.mostraValor();
	cout << endl;
	system("PAUSE");
	return 0;
}
