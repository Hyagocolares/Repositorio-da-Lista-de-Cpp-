/*Crie um programa que leia dois números inteiros e depois crie uma função
"Troca" usando ponteiros como parâmetros para inverter os valores que as
variáveis receberam. Depois imprima na tela seus valores. */

#include <iostream>
#include <locale.h>

using namespace std;

void troca(int *ap_num1, int *ap_num2)
{
	int temp = *ap_num1;
	*ap_num1 = *ap_num2;
	*ap_num2 = temp;
	cout << "\n TROCANDO VALORES" << endl;
	cout << "\n PRIMEIRO NÚMERO: " << *ap_num1 << ", SEGUNDO NÚMERO: " << *ap_num2 << endl;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	cout << " Digite 1° Numero: ";
	cin  >> num1;
	cout << " Digite 2° Numero: ";
	cin >> num2;

	cout << "\n 1° Numero: " << num1 << ", 2° Numero: " << num2 << endl;
	troca(&num1, &num2);
	return 0;
}
