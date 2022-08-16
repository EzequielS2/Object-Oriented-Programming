#include<iostream>


using namespace std;

#include "Ex3.h"




int main()
{


	
	Operacao p(2, 2);
	
    cout << "\n\n"<<"Operações" << "\n\n";
	
	cout << "\n\n"<<"Soma: " << p.soma();
	
	cout << "\n\n"<<"Subtração: " << p.subtracao();
	
	cout << "\n\n" << "Multiplicação: " << p.multiplicacao();
	
	cout << "\n\n" << "Divisão: " << p.divisao();
	
	cout << "\n\n" << "Operação: ((x + y) + (x – y)) - ((x * y) + (x / y)): " << p.Op();


	
}	
		

