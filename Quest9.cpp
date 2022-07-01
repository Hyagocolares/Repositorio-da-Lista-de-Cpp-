/*Crie um programa que inicialize um número inteiro com 100, e depois crie 
a função "Incrementa" para passar o endereço de um ponteiro e um número como 
parâmetro, somando dentro da função. Por fim, imprima na tela o valor do número.*/

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