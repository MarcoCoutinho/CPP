#include <iostream>
const int MAX = 10;
using namespace std;
//Programa para ilustrar aloca��o din�mica de mem�ria

int main ()
{
	int *intPtr;
	intPtr = new int[MAX]; //Cria um array din�mico usando new
	for (int j=0 ; j<MAX ; j++ )
		intPtr[j] = j*j; //Armazena o produto de j*j no array din�mico intPtr[]
	for (int j=0 ; j<MAX ; j++)
		cout << "\nValor de intPtr[" << j << "] = " << * (intPtr+j);//Acessa o conte�do do array dinamico usando * (intPtr+j)
		cout << endl << endl;
		
	delete [ ] intPtr;//Desaloca o array din�mico acesado pelo ponteiro intPtr
	cout << "\nDesalocando memoria...\n\n";
	system("PAUSE");
	return 0;
}
