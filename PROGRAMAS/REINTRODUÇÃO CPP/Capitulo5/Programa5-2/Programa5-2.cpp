#include <iostream>
#include <conio.h>//Para getch()
#include <iomanip>//Para setw()
using namespace std;
//Programa para ilustrar o uso de funcao
void exibeLinha(char c, int n)//defini��o da fun��o
{
	cout <<"\n";
	for(int i=0; i<n; i++)
	cout << c;
	cout << endl;
}
int main()
{
	void exibeLinha(char c, int n);//Prototipo da fun��o
	int n;
	char c='x';
	cout <<"Digite um caractere: ";
	c= getch();
	cout << "\n\nVoce digitou " << c << endl;
	cout << "\nDigite um valor inteiro: ";
	cin >> n;
	exibeLinha(c, n);//Chamada da fun��o
	cout << "Nome do aluno " << setw(10) << "Nota ";
	exibeLinha(c, n);//Chamada da fun��o
	cout << "Antonio " << setw(15) << "9.0 " << endl;
	cout << "Maria " << setw(15) << "8.0 " << endl;
	cout << "Pedro " << setw(15) << "7.0 ";
	exibeLinha(c, n);//Chamada da fun��o
	system("PAUSE");
	return 0;
}
