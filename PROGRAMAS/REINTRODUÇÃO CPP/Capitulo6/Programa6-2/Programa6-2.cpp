#include <iostream>
using namespace std;
//Programa para ilustrar definição de uma classe
class estoquecelular //Especificação de classe
{
	private:
		int codigoFab;
		int codigoModelo;
		double custo;
	public:
	void setdados(int f, int m, double c)//Definição de dados
	{
		codigoFab=f;
		codigoModelo=m;
		custo=c;
	}
	void mostradados () //Mostra dados
	{
		cout << "\nCodigo do fabricante = " << codigoFab;
		cout <<"\nCodigo do modelo = " << codigoModelo;
		cout << "\nCusto do aparelho = " << custo;
		cout << endl;
	}
};
int main ()
{
estoquecelular obj1, obj2; //Declaração de 2 objetos
obj1.setdados(1234, 777, 117.5 );//Chamada a função membro para definir valores
obj2.setdados(4567, 999, 599.99);
obj1.mostradados();//Chamada a função membro para mostrar valores
obj2.mostradados();
cout << endl;
system ("PAUSE");
return 0;
}
