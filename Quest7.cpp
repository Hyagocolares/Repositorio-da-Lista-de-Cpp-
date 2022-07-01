/*Fa�a um programa que leia um vetor com os dados de 5 carros: marca
(m�ximo 15 letras), ano e pre�o. Leia um valor p e mostre as informa��es
de todos os carros com pre�o menor que p. Repita este processo at� que
seja lido um valor p = 0.*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct vei
{
	char mm[15];
	int aa;
	float pp;
};

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	vei v[5];
	int i = 0;
	for(i = 0; i < 5; i++)
	{
		cout << " VE�CULO " << i << "�: ";
		cout << "\n INFORME A MARCA DO VE�CULO: ";
		cin >> v[i].mm;
		cout << "\n INFORME O ANO DO VE�CULO: ";
		cin >> v[i].aa;
		cout << "\n INFORME O PRE�O DO VE�CULO: ";
		cin >> v[i].pp;
		system("pause");
		system("cls");
	}

	float p = 1;

	do
	{
		cout << "\n\n PROCURAR VE�CULO(S) ABAIXO DE QUAL PRE�O: ";
		cin >> p;

		if(p == 0)
		{
			cout << "\n\n OBRIGADO POR USAR NOSSO PROGRAMA \n\n";
			return 0;
		}

		for(int i = 0; i < 5; i++)
		{
			if(v[i].pp < p)
			{
				cout << "\n VE�CULO " << i << "�: ";
				cout << "\n MARCA: " << v[i].mm;
				cout << "\n ANO: " << v[i].aa;
				cout << "\n PRE�O: " << v[i].pp;
			}
		}
	}
	while(p != 0);
}
