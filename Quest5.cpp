/*Faça a estrutura Produto no qual armazena nome e quantidade,
depois crie uma união Dinheiro que irá conter real e centavos.
Armazene e imprima os dados inseridos.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct
{
	char name[50];
	int quant;
} produto;

union dinheiro
{
	float cc;
	int rr;
};

int main()
{
	dinheiro r;
	dinheiro c;

	produto p;
	strcpy(p.name, "HYAGO");
	p.quant = 20;

	r.rr = 50;
	c.cc = 0.2;

	cout << "nome: " << p.name << endl;
	cout << "Quantidade: " << p.quant << endl;
	cout << "Preco: " << r.rr + c.cc << endl;
	return 0;
}
