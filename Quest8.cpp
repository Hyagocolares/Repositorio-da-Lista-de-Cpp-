/*Escreva um programa que simule contas bancárias, com as seguintes
especificações:
a)Ao iniciar o programa vamos criar contas bancárias para três clientes.

b)Cada conta terá o nome e o CPF do cliente associado a ela.

c)No ato da criação da conta o cliente precisará fazer um depósito inicial.

d)Após as contas serem criadas, o sistema deverá possibilitar realizações
de saques ou depósitos nas contas.

e)Sempre que uma operação de saque ou depósito seja realizada, o sistema
deverá imprimir o nome do titular e o saldo final da conta.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
using namespace std;
struct COUNT
{
	char nome[50];
	char num_cpf[12];
	float deposito;
	float saque;
	float saldo;
};
struct P_KEY
{
	COUNT cpf;
};
int main()
{
	setlocale(LC_ALL, "portuguese");
	P_KEY contas[3];
	for(int i = 0; i < 3; i++)
	{
		cout << "\n\t BANCO BR" << endl;
		cout << "\t ------------------------------\n" << endl;
		cout << "\t CADASTRAR CONTA:" << endl;
		cout << "\t ------------------------------\n" << endl;
		cout << "\t " << i + 1 << "°" << " CONTA: " << endl;
		cout << "\t NOME COMPLETO: ";
		cin >> contas[i].cpf.nome;
		cout << "\n\t CPF:           ";
		cin >> contas[i].cpf.num_cpf;
		cout << "\n\t CADASTRO REALIZADO!" << endl;
		cout << "\t ------------------------------" << endl;
		system("cls");
		cout << "\n\t A REALIZAR DEPÓSITO INICIAL:" << endl;
		cout << "\t ------------------------------\n" << endl;
		cout << "\t INFORME DEPÓSITO INICIAL: ";
		cin >> contas[i].cpf.deposito;
		contas[i].cpf.saldo = contas[i].cpf.deposito;
		cout << "\n\t $ DEPÓSITO CONCLUÍDO! $" << endl;
		cout << "\t ------------------------------\n" << endl;
		system("pause");
		system("cls");
	}
	int opcao = 0;
	char consulta_cpf[12];
	system("cls");
	do
	{
		cout << "\n\t BANCO BR\n";
		cout << "\t ------------------------------\n" << endl;
		cout << "\t ENTRAR NA CONTA -> [1]" << endl;
		cout << "\t SAIR            -> [2]" << endl;
		cout << "\t :";
		cin >> opcao;
		if(opcao == 1)
		{
			cout << "\t DIGITE O CPF: ";
			cin >> consulta_cpf;
			int retorno_comparacao;
			float novo_deposito;
			float novo_saque;
			system("cls");
			for(int i = 0; i < 3; i++)
			{
				retorno_comparacao = strcmp(consulta_cpf, contas[i].cpf.num_cpf);
				int opcao2 = 0;
				if(retorno_comparacao == 0)
				{
					do
					{
						if(retorno_comparacao == 0)
						{
							cout << "\n\t CONTA DE " << contas[i].cpf.nome;
							cout << "\n\t ------------------------------\n";
							cout << "\t DEPÓSITO -> [1]" << endl;
							cout << "\t SAQUE    -> [2]" << endl;
							cout << "\t SALDO    -> [3]" << endl;
							cout << "\t SAIR     -> [4]" << endl;
							cout << "\t :";
							cin >> opcao2;
							switch(opcao2)
							{
							case 1:
								cout << "\t QUANTO DESEJA DEPOSITAR: ";
								cin >> novo_deposito;
								contas[i].cpf.deposito = contas[i].cpf.deposito + novo_deposito;
								contas[i].cpf.saldo = contas[i].cpf.deposito;
								cout << "\n\t COMPROVANTE DE DEPÓSITO ";
								cout << "\n\t --------------------------------\n";
								cout << "\t CLIENTE:                     " << contas[i].cpf.nome;
								cout << "\n\t CPF:                       " << contas[i].cpf.num_cpf;
								cout << "\n\t VALOR DEPOSITADO: R$       " << novo_deposito;
								cout << "\n\t SALDO TOTAL DISPONÍVEL: R$ " << contas[i].cpf.saldo;
								cout << "\n\t --------------------------------\n";
								system("pause");
								system("cls");
								break;
							case 2:
								cout << "\t QUANTO DESEJA SACAR: ";
								cin >> novo_saque;
								contas[i].cpf.saldo = contas[i].cpf.saldo - novo_saque;
								cout << "\n\t COMPROVANTE DE SAQUE ";
								cout << "\n\t --------------------------------\n";
								cout << "\t CLIENTE:                    " << contas[i].cpf.nome;
								cout << "\n\t CPF:                       " << contas[i].cpf.num_cpf;
								cout << "\n\t VALOR RETIRADO:         R$ " << novo_saque;
								cout << "\n\t SALDO TOTAL DISPONÍVEL: R$ " << contas[i].cpf.saldo;
								cout << "\n\t --------------------------------\n";
								system("pause");
								system("cls");
								break;
							case 3:
								cout << "\n\t COMPROVANTE DE SALDO ";
								cout << "\n\t --------------------------------\n";
								cout << "\t CLIENTE:                    " << contas[i].cpf.nome;
								cout << "\n\t CPF:                       " << contas[i].cpf.num_cpf;
								cout << "\n\t SALDO TOTAL DISPONÍVEL: R$ " << contas[i].cpf.saldo;
								cout << "\n\t --------------------------------\n";
								system("pause");
								system("cls");
								break;
							case 4:
								cout << "\n\t RETORNE AO MENU PRINCIPAL \n" << endl;
								system("pause");
								system("cls");
								break;
							default:
								cout << "\n\t DIGITE UMA OPÇÃO VÁLIDA \n" << endl;
								system("pause");
								system("cls");
								break;
							}
						}
					}
					while(opcao2 != 4);
				}
			}
		}
	}
	while(opcao != 2);
	return 0;
}
