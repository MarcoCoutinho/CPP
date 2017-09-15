#include <iostream>
//Programa para ler dois inteiros e calcular a soma

int main()
{
	int x1, x2;//Define as variáveis x1,x2
	std::cout << "\nDigite um valor inteiro, tecle enter e digite outro valor inteiro: \n";
	std::cin >> x1 >> x2;
	int soma = x1+x2;//Definição da variável soma
	std::cout << "\nSoma = " << soma << "\n\n";
	system ("PAUSE");
	return 0;
}
