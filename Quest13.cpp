/* 13. Escreva um programa que contenha duas variaveis inteiras.
Compare seus endere�os e exiba o maior endere�o. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int v1, v2;
	int *pv1 = &v1;
	int *pv2 = &v2;
	if(sizeof(pv1) > sizeof(pv2))
	{
		cout << " O endere�o da primeira vai�vel � maior que o da segunda.  ";
		cout << "\n Endere�o: " << pv1;
	}
	else
	{	
		cout << "\n---------------------------------------------------------- ";
		cout << "\nO endere�o da segunda vai�vel � maior que o da primeira.  ";
		cout << "\nEndere�o: " << pv2;
		cout << "\n---------------------------------------------------------- ";
	}
	return 0;
}
