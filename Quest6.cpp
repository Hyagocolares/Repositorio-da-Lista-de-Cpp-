/*Crie uma ENUMERA��O "Refei��o", sendo atribu�do 10 para caf�, 
20 para almo�o e 30 para jantar. Depois, crie um menu no qual seleciona
a refei��o por meio do n�mero atribu�do e imprime na tela qual foi selecionado.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <iostream>

 enum ref {
  CAFE = 10,
  ALMOCO = 20,
  JANTA = 30,
 };

typedef enum ref tipo_ref;
 
using namespace std;

int main() {
 
 setlocale(LC_ALL,"Portuguese");

 int esc;

 tipo_ref esc01 = CAFE;
 tipo_ref esc02 = ALMOCO;
 tipo_ref esc03 = JANTA;
 
 do{
 cout << " BEM VINDO AO CAF� DOS GADO\n" << endl;
 cout << " MENU: \n" << endl;
 cout << " CAF�....[10]" << endl;
 cout << " ALMO�O..[20]" << endl;
 cout << " JANTA...[30]" << endl;
 cout << " SAIR....[40]" << endl;
 cout << " ------------\n";
 cin >> esc;
 
 if(esc == esc01 ){
  cout << " -> CAF� " << endl;
 }
 if(esc == esc02){
  cout << " -> ALMO�O" << endl;
 }
 if(esc == esc03){
  cout << " -> JANTA" << endl;
 } else{
	 cout << "Deu errado!" << endl;
 }
 
 system("pause");
 system("cls");
 
}while(esc != 40);
return 0;
}