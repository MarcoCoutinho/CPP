#include <iostream>
using namespace std;
//Programa para ilustrar o uso de operador módulo (%)

int main()
{
	int x=10;
	cout << "Valor inicial de x: " << x << endl;
	x+=10;//x=x+10
	cout << "Resultado apos x+=10: " << x << endl;
	x-=5;//x=x-5
	cout << "Resultado apos x-= 5: " << x << endl;
	x*=2;//x=x*2
	cout << "Resultado apos x*= 2: " << x << endl;
	x/=5;//x=x/5
	cout << "Resultado apos x/= 5: " << x << endl;
	x%=5;//x=x%5
	cout << "Resultado apos x%= 5: " << x << endl << endl;
	system("PAUSE");
	return 0;
}
