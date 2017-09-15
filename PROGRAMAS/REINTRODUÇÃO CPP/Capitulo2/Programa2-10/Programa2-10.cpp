#include <iostream>
#include <limits>
using namespace std;
//Programa para obter os limites dos tipos de dados
int main()
{
	cout << "Limite inferior de <char>: " << (int)numeric_limits<char>::min() << endl;
	cout << "litite superior de <char>: " << (int)numeric_limits<char>::max() << endl;
	cout << "Número de bytes de <char>: " << sizeof(char) << endl;
	cout << "Limite inferior de <short>: " << numeric_limits<short>::min() << endl;
	cout << "LImite superior de <short>: " << numeric_limits<short>::max() << endl;
	cout << "Número de bytes de <short>: " << sizeof(short) << endl;
	cout << "Limite inferior de <int>: " << numeric_limits<int>::min() << endl;
	cout << "Limite superior de <int>: " << numeric_limits<int>::max() << endl;
	cout << "Número de bytes de <int>: " << sizeof(int) << endl;
	cout << "Limite inferior de <long>: " << numeric_limits<long>::min() << endl;
	cout << "Limite superior de <long>: " << numeric_limits<long>::min() << endl;
	cout << "Número de bytes de <long>: " << sizeof(long) << endl;
	cout << "Limite inferior de <float>: " << numeric_limits<float>::min() << endl;
	cout << "Limite superior de <float>: " << numeric_limits<float>::max() << endl;
	cout << "Número de bytes de <float>: " << sizeof(float) << endl;
	cout << "Limite inferior de <double>: " << numeric_limits<double>::min() << endl;
	cout << "limite inferior de <double>: " << numeric_limits<double>::max() << endl;
	cout << "Número de bytes de <double>: " << sizeof(double) << endl;
	cout << "\n";
	system("PAUSE");
	return 0; 	
}
