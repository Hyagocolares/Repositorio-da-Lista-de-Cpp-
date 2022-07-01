/* 13. Escreva um programa que contenha duas variaveis inteiras.
Compare seus endereços e exiba o maior endereço. */

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
		cout << " O endereço da primeira vaiável é maior que o da segunda.  ";
		cout << "\n Endereço: " << pv1;
	}
	else
	{	
		cout << "\n---------------------------------------------------------- ";
		cout << "\nO endereço da segunda vaiável é maior que o da primeira.  ";
		cout << "\nEndereço: " << pv2;
		cout << "\n---------------------------------------------------------- ";
	}
	return 0;
}
