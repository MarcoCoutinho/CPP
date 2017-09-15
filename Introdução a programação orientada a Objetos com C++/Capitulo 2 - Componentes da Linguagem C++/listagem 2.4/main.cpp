#include <iostream>

//Programa para ler dois números inteiros e calcular soma

int main()
{
	int x1, x2;//Define as variaveis x1, x2
	
	//solicita que o usuario entre com dois valores inteiros
	
	std::cout << "\nDigite o primeiro valor inteiro e tecle Enter: \n";
	std::cin >> x1;//ler primeiro valor inteiro
	std::cout << "\nDigite o segundo valor inteiro e tecle Enter: \n";
	std::cin >> x2;//ler segundo valor inteiro
	std::cout << "Soma = " << x1 + x2 << "\n\n";
	system("PAUSE");
	return 0;
}
