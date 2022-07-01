/*Crie um registro com nome endere�o onde vai conter os
campos rua, n�mero, complemento, bairro, cidade, estado.
Fa�a o usu�rio preencher e exibir todos os dados depois
do preenchimento.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct REGEND
{
	char rua[30];
	char numero[10];
	char comple[20];
	char bairro[10];
	char cidade[15];
	char estado[10];
};

typedef struct REGFICHA
{
	char nome[40];
	REGEND end;
};

using namespace std;

int main()
{
	setlocale(LC_ALL , "Portuguese");
	REGFICHA pessoa;
	REGFICHA *Pessoa1 = &pessoa;

	cout << " INFORME SEU NOME: ";
	cin >> pessoa.nome;

	cout << "\n INFORME SEU ENDERE�O: \n";
	cout << " RUA: ";
	cin >> pessoa.end.rua;

	cout << "  N�MERO: ";
	cin >> pessoa.end.numero;

	cout << "  COMPLEMENTO: ";
	cin >> pessoa.end.comple;

	cout << "  BAIRRO: ";
	cin >> pessoa.end.bairro;

	cout << "  CIDADE: ";
	cin >> pessoa.end.cidade;

	cout << "  ESTADO: ";
	cin >> pessoa.end.estado;

	cout << "\n\n";

	printf("Nome: %s\n", pessoa.nome);
	printf("Endre�o: \n");
	printf(" -Rua: %s\n", pessoa.end.rua);
	printf(" -N�mero: %s\n", pessoa.end.numero);
	printf(" -Complemento: %s\n", pessoa.end.comple);
	printf(" -Bairro: %s\n", pessoa.end.bairro);
	printf(" -Cidade: %s\n", pessoa.end.cidade);
	printf(" -Estado: %s\n", pessoa.end.estado);
	return 0;
}
