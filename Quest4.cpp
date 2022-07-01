/*Mostre como declarar e exibir as seguintes constantes usando enumeração:
INVERNO = 0, PRIMAVERA = 1, VERAO = 2 e OUTONO = 3.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

enum  CLIMA
{
	INVERNO = 0,
	PRIMAVERA,
	VERAO,
	OUTONO,
};

typedef enum CLIMA tipo_clima;

int main()
{
	setlocale(LC_ALL , "Portuguese");
	char CLIMAX;
	
	cout << "CLIMA:: ";
		printf("INVERNO - 0 \n");
		printf("PRIMAVERA - 1 \n");
		printf("VERAO - 2 \n");
		printf("OUTONO - 3 \n");
	cin >> CLIMAX;

	tipo_clima CLIMA = CLIMAX;
	
	if (CLIMA == 0)
	{
		printf("INVERNO - 0 \n");
	}
	if (CLIMA == 1)
	{
		printf("PRIMAVERA - 1 \n");
	}
	if (CLIMA == 2)
	{
		printf("VERAO - 2 \n");
	}
	if (CLIMA == 3)
	{
		printf("OUTONO - 3 \n");
	};

	return 0;
}

