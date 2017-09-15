#include <iostream>
#include <conio.h>
using namespace std;
//Programa para ilstrar a operação da funbção getche()

int main()
{
	int x,y,z;
	cout << "Digite 3 numeros x, y, z: ";
	cin >> x >> y >> z;
	if( x==y)
		if(y==z)
			cout << "\nx, y e z sao iguais\n" << endl;
		else
			cout << "\nx, y, z sao diferentes\n" << endl;
	system("PAUSE");
	return 0;
}

