/*


Escrever um programa em C++ para implementar a seguinte classe,
incluindo sua interface. No main(), criar dois objetos passando valores
quaisquer para seus atributos atrav�s do m�todo construtor e em seguida os
imprimir.

*/






#include<iostream>

#include<string>

using namespace std;

#include "Ex8.h"   



int main()
{
		Produto p1(123, "Caderno", 5.99);
		
		Produto p2(112, "Caneta", 1.99);
		
		cout << "Informa��es do produto 1" << "\n\n";
		
		cout << "C�digo: " << p1.getCod() << endl  << "Nome: " << p1.getNome() << 
		endl << "Pre�o: " << p1.getPreco() << endl << "Pre�o final: " <<p1.CalcPrecoFinal() << "\n\n";
		
		cout << "Informa��es do produto 2" << "\n\n";
		
		cout << "C�digo: " << p2.getCod() << endl  << "Nome: " << p2.getNome() << 
		endl << "Pre�o: " << p2.getPreco() << endl << "Pre�o final: "<< p2.CalcPrecoFinal()<<"\n\n";
		
		
}




