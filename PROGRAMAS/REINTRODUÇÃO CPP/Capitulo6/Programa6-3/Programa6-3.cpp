#include <iostream>
using namespace std;
//Programa para ilustrar definição de uma clase
class medida //Espcificação de uma classe medida
{
	private:
	int metro;
	float centimetro;
	public:
	void setMedida(int m, float c)//Define medida
	{
	metro=m;
	centimetro=c;
	}
	void getMedida()//Obtém medida do usuário
	{
		cout << "\nDigite a parte de metros da medida: ";
		cin >> metro;
		cout << "\nDigite a parte de centimetros da medida: ";
		cin >> centimetro;
	}
	void mostraMedida()//Exibe medida
	{
		cout << (metro + centimetro/100) << " metros \n";
	}
};
int main()
{
	medida m1, m2;//Cria 2 objetos medida
	m1.setMedida(25, 50);
	m2.getMedida();//Obtém valores para objeto m2
	cout << "\nMedida 1 = "; m1.mostraMedida ();//exibe valor total
	cout << "\nMedida 2 = ";m2.mostraMedida ();
	cout << endl;
	system ("PAUSE");
	return 0;
}
