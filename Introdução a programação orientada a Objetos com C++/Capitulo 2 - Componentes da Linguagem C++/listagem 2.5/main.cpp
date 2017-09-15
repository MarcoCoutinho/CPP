#include <iostream>

//Programa para ler dois numeros inteiros e calcular soma

int main()
{
	int x1, x2;// define as variaveis x1 e x2
	
	//solicita que o usuario entre com dois valores inteiros
	
	std::cout << "\nDigite um valor inteiro, tecle Enter e digite outro valor inteiro: \n";
	std::cin >> x1 >> x2;
	int soma = x1 + x2;//definição da variavel soma
	std::cout << "soma = " << soma << "\n\n";
	system("PAUSE");
	return 0;
}
