#include <iostream>
#include <conio.h>//Para getch()
#include <iomanip>//Para setw()
using namespace std;
//Programa para ilustrar o uso de funcao
void exibeLinha(char c, int n)//definição da função
{
	cout <<"\n";
	for(int i=0; i<n; i++)
	cout << c;
	cout << endl;
}
int main()
{
	void exibeLinha(char c, int n);//Prototipo da função
	int n;
	char c='x';
	cout <<"Digite um caractere: ";
	c= getch();
	cout << "\n\nVoce digitou " << c << endl;
	cout << "\nDigite um valor inteiro: ";
	cin >> n;
	exibeLinha(c, n);//Chamada da função
	cout << "Nome do aluno " << setw(10) << "Nota ";
	exibeLinha(c, n);//Chamada da função
	cout << "Antonio " << setw(15) << "9.0 " << endl;
	cout << "Maria " << setw(15) << "8.0 " << endl;
	cout << "Pedro " << setw(15) << "7.0 ";
	exibeLinha(c, n);//Chamada da função
	system("PAUSE");
	return 0;
}
