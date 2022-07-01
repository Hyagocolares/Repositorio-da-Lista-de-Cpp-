/*Q-11. Crie um programa que contenha uma matriz de float contendo 3 linhas 
e 3 colunas. Imprima o endereço de cada posicão dessa matriz.
*/

#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;
 
int main()
{
 setlocale(LC_ALL, "PORTUGUESE");
 
 float matriz[3][3];
 
 for(int i = 0; i < 3; i++)
 {
 
  for(int j = 0; j < 3; j++)
  {
   
   cout << " "<< i << "," << j << ": " << &matriz[i][j];
   
  }
   
   cout << " \n";
   
 }

    return 0;       
}