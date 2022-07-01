/*Faça um programa que leia um vetor com os dados de 5 carros: marca
(máximo 15 letras), ano e preço. Leia um valor p e mostre as informações
de todos os carros com preço menor que p. Repita este processo até que
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
		cout << " VEÍCULO " << i << "°: ";
		cout << "\n INFORME A MARCA DO VEÍCULO: ";
		cin >> v[i].mm;
		cout << "\n INFORME O ANO DO VEÍCULO: ";
		cin >> v[i].aa;
		cout << "\n INFORME O PREÇO DO VEÍCULO: ";
		cin >> v[i].pp;
		system("pause");
		system("cls");
	}

	float p = 1;

	do
	{
		cout << "\n\n PROCURAR VEÍCULO(S) ABAIXO DE QUAL PREÇO: ";
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
				cout << "\n VEÍCULO " << i << "°: ";
				cout << "\n MARCA: " << v[i].mm;
				cout << "\n ANO: " << v[i].aa;
				cout << "\n PREÇO: " << v[i].pp;
			}
		}
	}
	while(p != 0);
}
