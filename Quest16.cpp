/*Crie um manipulador para objetos ifstream que imprima os dados inseridos em
um arquivo .TXT, utilizando o método open(), close() e getline().*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
	string myText;

	ifstream MyReadFile("texto1.txt");

	while (getline (MyReadFile, myText))
	{
		cout << myText;
	}
	MyReadFile.close();
}