/*Crie uma estrutura chamada “Tipo” que armazenará sexo e nome.
Após isso, leia as informações de 5 pessoas, armazenando em vetor
de 5 posições. Depois, utilizando a função “quantidade” fora da
estrutura que contará quantos homens e mulheres foram inseridos,
além de contar se houve preenchimento errado nos dados.*/

#include <strings.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <iosfwd>

using namespace std;

struct Tipo
{
	char sexo[10];
	string nome;

	void mostrar()
	{
		cout << "\n Sexo-----------: " << sexo << endl;
		cout << "\n Nome-----------: " << nome << endl;
		cout << "\n ---------------- " << endl;
	}
};

int main()
{
	setlocale(LC_ALL , "Portuguese");
	Tipo pessoas[5];

	int f = 0;
	int m = 0;
	int n = 0;
	int option;

	for(int i = 0; i < 5; i++)
	{
		cout << "\n " << i + 1 << "° " << "Pessoa \n";

		cout << "1 -> Feminino ou 2 -> Masculino\n";
		cin >> option;

		if(option == 1)
		{
			cout << " Sexo-----------: Feminino\n";
			strcpy(pessoas[i].sexo, "Feminino");
			f = f++;
		}
		else if(option == 2)
		{
			cout << " Sexo-----------: Masculino\n";
			strcpy(pessoas[i].sexo, "Masculino");
			m = m++;
		}
		else
		{
			cout << " Error\n";
			n = n++;
		}

		cout << " Nome-----------: ";
		cin.ignore();
		getline(cin, pessoas[i].nome);

		cout << "\n";
		system("pause");
		system("cls");
	}
	system("cls");

	for(int i = 0; i < 5; i++)
	{
		pessoas[i].mostrar();
	}
	cout << "Total de " << f << " Mulheres inseridas" <<  endl;
	cout << "Total de " << m << " Homens inseridos" <<  endl;
	cout << "Total de " << n << " Erro(s)" <<  endl;

	return 0;
}
