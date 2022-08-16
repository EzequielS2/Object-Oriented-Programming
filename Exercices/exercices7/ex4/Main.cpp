#include<iostream>

#include<string>

using namespace std;

#include "Ex4.h"




int main()
{


	
	pessoa pe1("anderson@kmail.com", "Rua 73, São Paulo", 997001100 );
	
	pessoa pe2("carla@kmail.com", "Avenida Rio Branco 10, Rio de Janeiro", 997110011 );
	
	pessoa pe3("ana@kmail.com", "Rua 73, Volta Redonda", 997120012);
	
	
	
	cout << "\n\n"<< "Dados da primeira pessoa" << "\n\n";
	
	cout << "Email: " <<pe1.geEmail();
	cout << "\n" <<"Endereço: " << pe1.geEnd();
	cout << "\n" <<"Telefone: " << pe1.geTel();

	

	cout << "\n\n"<< "Dados da segunda pessoa" << "\n\n";

	cout << "Email: " << pe2.geEmail();
	cout << "\n" <<"Endereço: " << pe2.geEnd();
	cout << "\n" <<"Telefone: " << pe2.geTel();

	cout << "\n\n" << "Dados da terceira pessoa" << "\n\n";

	cout << "Email: " << pe3.geEmail();
	cout << "\n" <<"Endereço: " << pe3.geEnd();
	cout << "\n" <<"Telefone: " << pe3.geTel();
	
	

}
	

		

