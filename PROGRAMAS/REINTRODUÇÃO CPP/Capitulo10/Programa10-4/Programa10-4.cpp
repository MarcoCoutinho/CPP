#include <iostream>
const int MAX=100;
using namespace std;

//Programa para ilustrar uso de ponteiros para arrays
int main()
{
	double a[MAX]; //declara array de double
	double *aPtr = a; //declara *aPtr
	double media;
	double soma = 0.0;
	int n;
	
	do {
		cout << "\nInforme a quantidade de elementos do array de '2 a 100' : ";
		cin >> n;
		cout << endl << endl;
	} while (n < 2 || n > MAX);
	
	for(int j=0 ; j<n ; j++)
	{
		cout << "a[" << j << "] = ";
		cin >> *(a+j); // usando *(a+j) para armazenar em a[j]
	}
	
	for (int j=0 ; j<n ; j++)
		soma += *(aPtr + j); //usando *aPtr para acessar a[j]
		
	media = soma/n;
	cout << "\nSoma total = " << soma;
	cout << "\n\nMedia obtida = " << media << endl << endl;
	
	system("PAUSE");
	return 0;
}
