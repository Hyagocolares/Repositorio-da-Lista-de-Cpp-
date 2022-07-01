/*Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &).
Modifique os valores de cada variável usando os ponteiros. Imprima os valores
das variáveis antes e após a modificação.*/

#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int numero;
	int *p_numero = &numero;
	float num_real;
	float *p_num_real = &num_real;
	char nome;
	char *p_nome = &nome;

	cout << "\n\t DIGITE UM NÚMERO INTEIRO: ";
	cin >> numero;

	cout << "\n\t DIGITE UM NÚMERO REAL: ";
	cin >> num_real;

	cout << "\n\t DIGITE UM NOME: ";
	cin >> nome;

	cout << "\n\t ----------------------------------------------- " << endl;

	cout << "\n\t NÚMERO INTEIRO: " << numero << endl;
	cout << "\n\t NÚMERO REAL:    " << num_real << endl;
	cout << "\n\t NOME:           " << nome << endl;

	cout << "\n\t ----------------------------------------------- " << endl;
	cout << "\n\t DIGITE UM NÚMERO INTEIRO: ";
	cin >> *p_numero;

	cout << "\n\t DIGITE UM NÚMERO REAL:    ";
	cin >> *p_num_real;

	cout << "\n\t DIGITE UM NOME:         ";
	cin >> *p_nome;
	cout << "\n\t ----------------------------------------------- " << endl;

	cout << "\n\t NÚMERO INTEIRO: " << *p_numero << endl;
	cout << "\n\t NÚMERO REAL:    " << *p_num_real << endl;
	cout << "\n\t NOME:           " << *p_nome << endl;

	return 0;
}
