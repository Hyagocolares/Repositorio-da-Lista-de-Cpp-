/*Crie uma estrutura chamada “Celular” que armazenará seu nome,
cor, preço e armazenamento interno. Preencha 5 registros diferentes
em um vetor de 5 posições. Depois, imprima os dados na tela.*/

#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

using namespace std;

struct Celular
{
	string nome;
	string cor;
	float preco;
	int armazenamento;

	void mostrar()
	{
		cout << "\n NOME-----------: " << nome << endl;
		cout << "\n COR------------: " << cor << endl;
		cout << "\n PREÇO----------: " << "R$ " << preco << endl;
		cout << "\n ARMAZENAMENTO--: " << armazenamento << " GB " << endl;
		cout << "\n ---------------- " << endl;
	}
};

int main()
{
	setlocale(LC_ALL , "Portuguese");

	Celular cell[5];

	for(int i = 0; i < 5; i++)
	{
		cout << "\n " << i + 1 << "° " << "CELULAR \n";
		cout << " NOME-----------: ";
		cin.ignore();
		getline(cin, cell[i].nome);

		cout << "\n COR------------: ";
		cin.ignore();
		getline(cin, cell[i].cor);

		cout << "\n PREÇO----------: ";
		cin >> cell[i].preco;

		cout << "\n ARMAZENAMENTO--: ";
		cin >> cell[i].armazenamento;

		cout << "\n";
		system("pause");
		system("cls");
	}

	system("cls");

	for(int i = 0; i < 5; i++)
	{
		cell[i].mostrar();
	}
}
