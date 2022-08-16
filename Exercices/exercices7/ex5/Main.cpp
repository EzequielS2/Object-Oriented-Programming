#include<iostream>

#include<string>

using namespace std;

#include "Ex5.h"




int main()
{
	
	carro us1("CHEVROLET", "CAMARO", "Preto", 2017);
	

	carro us2("RENAULT", "SANDERO", "Prata", 2019);
	
	carro us3("Citroën", "C4 PALLAS", "Vermelho", 2010);
	
	


	cout << "\n\n"<< "Dados do user 1" << "\n\n";
	
	cout << "Marca: " <<us1.geMarca();
	cout << "\n" <<"Modelo: " << us1.geModelo();
	cout << "\n" <<"Cor: " << us1.geCor();
	cout << "\n" <<"Ano: " << us1.geAno();

	

	cout << "\n\n"<< "Dados do user 2" << "\n\n";

	cout << "Marca: " <<us2.geMarca();
	cout << "\n" <<"Modelo: " << us2.geModelo();
	cout << "\n" <<"Cor: " << us2.geCor();
	cout << "\n" <<"Ano: " << us2.geAno();


	cout << "\n\n" << "Dados do user 3" << "\n\n";

	cout << "Marca: " <<us3.geMarca();
	cout << "\n" <<"Modelo: " << us3.geModelo();
	cout << "\n" <<"Cor: " << us3.geCor();
	cout << "\n" <<"Ano: " << us3.geAno();
	
	

}
