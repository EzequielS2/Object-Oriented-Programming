#include<iostream>


using namespace std;

#include "Ex3.h"




int main()
{


	
	Operacao p(2, 2);
	
    cout << "\n\n"<<"Opera��es" << "\n\n";
	
	cout << "\n\n"<<"Soma: " << p.soma();
	
	cout << "\n\n"<<"Subtra��o: " << p.subtracao();
	
	cout << "\n\n" << "Multiplica��o: " << p.multiplicacao();
	
	cout << "\n\n" << "Divis�o: " << p.divisao();
	
	cout << "\n\n" << "Opera��o: ((x + y) + (x � y)) - ((x * y) + (x / y)): " << p.Op();


	
}	
		

