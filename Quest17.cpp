/*Crie um laço de repetição que manipula objetos fstream permitindo que leia
strings “nomes para salvar” e incremente em um arquivo “texto2.txt” até não
desejar mais inserir esses dados. Depois imprima na tela todos os dados inseridos,
utilizando o método open(), close() e getline().*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

fstream arquivo; 
    arquivo.open("texto2.txt", ios::out);
    
    cout << "Digite o nome para ser gravado no arquivo.\n";
    cout << "Digite 0 para indicar termino do preenchimento do texto e terminar o programa.\n\n";
   
    string S = "";
    string T = "";

 while(S != "0"){     

    getline(cin, S);
    T.append(S+"\n");           
 }
 arquivo << T ;

arquivo.close();

int x = 150;
char impressao[x];
ifstream fin("texto2.txt");
 while(fin){
fin.getline(impressao,x);
cout << impressao << "\n";
}

return 0;
}