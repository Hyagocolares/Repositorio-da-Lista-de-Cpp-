/*Crie um programa que inicialize um n�mero inteiro com 100, e depois crie 
a fun��o "Incrementa" para passar o endere�o de um ponteiro e um n�mero como 
par�metro, somando dentro da fun��o. Por fim, imprima na tela o valor do n�mero.*/

#include <iostream>

using namespace std;

void increment(int *nume1, int nume2){
  
    cout << "\n A SOMA EH: " << *nume1+nume2;
}

int main(){

    int num = 24;

    increment(&num,num);

    return 0;
}