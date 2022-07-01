/*Crie um programa que leia dois n�meros inteiros e depois crie uma fun��o
"Troca" usando ponteiros como par�metros para inverter os valores que as
vari�veis receberam. Depois imprima na tela seus valores. */

#include <iostream>
#include <locale.h>

using namespace std;

void troca(int *ap_num1, int *ap_num2)
{
	int temp = *ap_num1;
	*ap_num1 = *ap_num2;
	*ap_num2 = temp;
	cout << "\n TROCANDO VALORES" << endl;
	cout << "\n PRIMEIRO N�MERO: " << *ap_num1 << ", SEGUNDO N�MERO: " << *ap_num2 << endl;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	cout << " Digite 1� Numero: ";
	cin  >> num1;
	cout << " Digite 2� Numero: ";
	cin >> num2;

	cout << "\n 1� Numero: " << num1 << ", 2� Numero: " << num2 << endl;
	troca(&num1, &num2);
	return 0;
}
