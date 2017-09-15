#include <iostream>
using namespace std;
//Programa para ilustrar a criação e uso de uma fnção recursiva
const int MIN=2;
const int MAX=50;

double fatorial(int j)
{
	if(j>1)
		return double(j)*fatorial(j-1);
	else
		return j;
}

double permutacao (int m, int n)
{
	return fatorial(m) / fatorial(m-n);
}

double combinacao (int m, int n)
{
	return permutacao(m, n) / fatorial(n);
}

int main()
{
	double fatorial(int j);
	double permutacao(int m, int n);
	double combinacao(int m, int n);
	int m, n;
	
	do{
		cout <<"Digite um inteiro entre " << MIN << " e " << MAX << ": ";
		cin >> m; 
	}while (m<MIN || m>MAX);
	do{
		cout << "Agora digite um inteiro entre " << MIN << " e " << m << ": ";
		cin >> n;
		cout << "\n";
	}while (n<MIN || n>m);
	cout << "Numero de permu]tacoes P[" << m << ", " << n << "] = " << permutacao(m, n) << endl;
	cout << "Numero de combinacoes C[" << m << ", " << n << "] = " << combinacao(m, n) << endl << endl;
	system("PAUSE");
	return 0;
}
