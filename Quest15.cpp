/*Crie um manipulador para objetos ofstream que leia uma string  nome para salvar em um
arquivo texto1.txt, utilizando o método open() e close(), criado no programa.*/

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
	char nome[30];	
	cout << " Digite um nome: ";
	cin >> nome;
	ofstream out;
	out.open("texto1.txt");
	out << nome;
	out.close();
	return 0;
}
