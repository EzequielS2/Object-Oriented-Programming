/*


Escrever um programa em C++ para implementar a seguinte classe,
incluindo sua interface. No main(), criar dois objetos passando valores
quaisquer para seus atributos através do método construtor e em seguida os
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
		
		cout << "Informações do produto 1" << "\n\n";
		
		cout << "Código: " << p1.getCod() << endl  << "Nome: " << p1.getNome() << 
		endl << "Preço: " << p1.getPreco() << endl << "Preço final: " <<p1.CalcPrecoFinal() << "\n\n";
		
		cout << "Informações do produto 2" << "\n\n";
		
		cout << "Código: " << p2.getCod() << endl  << "Nome: " << p2.getNome() << 
		endl << "Preço: " << p2.getPreco() << endl << "Preço final: "<< p2.CalcPrecoFinal()<<"\n\n";
		
		
}




