#include <iostream>
using namespace std;
//Programa para ilustrar definição de ma classe
class minhaClasse //Especificação de ma classe
{
	private:
		int x;
	public:
		void setValor(int d) //função membro
		{ x=d; }
		void mostraValor() //função membro
		{cout << "\nValor = " << x << endl; }
};
int main ()
{
	minhaClasse obj1, obj2; //declaração de 2 objetos
	obj1.setValor(11); //chamada a função membro para definir os valores
	obj2.setValor(22);
	obj1.mostraValor(); //chamada a função membro para mostrar valores
	obj2.mostraValor();
	cout << endl;
	system("PAUSE");
	return 0;
}
