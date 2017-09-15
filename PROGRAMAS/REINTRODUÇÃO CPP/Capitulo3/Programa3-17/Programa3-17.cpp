#include <iostream>
using namespace std;
//Programa para ilstrar o uso do operador logico &&
int main()
{
	int n1,n2;
	cout << "\nDigite um numero inteiro n1= ";
	cin >> n1;//Entrada do usuário
	cout << "\nDigite um outro inteiro n2= ";
	cin >> n2;//Entrada do usuário
	if (n1%3==0 && n2%3==0)
	   cout << "\nn1 e n2 sao multiplos de 3\n" << endl;
	else
	   cout << "\nn1 e n2 nao sao multiplos de 3\n" << endl;
 	system("PAUSE");
 	return 0;
}
