#include <iostream>
#include <list>
using namespace std;
//Programa para ilustrar uma lista

int main()
{
	list<int> lista; //cria um objeto lista ligada a list
	list<int>:: iterator i; //ponteiro especial da classe list para acessar elementos numa lista
	
	int entrada;
	i = lista.begin(); //begin() retorna um (ponteiro) iterator que aponta para o primeiro elemento da lista
	
	cout << "\nDigite valores inteiros ou 's' para sair: \n";
	
	while (cin >> entrada)
	{
		lista.insert(i,entrada); //insere valor de entrada no endereço especificado pelo iterator 'i'
		i++;
	}
	lista.sort(); //ordena elementos da lista em ordem ascendente
	cout << "\nLista ordenada: \n";
	for(i = lista.begin(); i != lista.end(); i++) //end() testa se final da lista foi alcançado
	{
		cout << *i << endl;
	}
	cout << endl << endl;
	system("PAUSE");
	return 0;
}

