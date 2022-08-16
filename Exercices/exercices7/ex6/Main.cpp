#include<iostream>

#include<string>

using namespace std;

#include "Ex6.h"




int main()
{

	
	MenuFrutas fr1("MAÇÃ", "VERMELHA", 130);

	MenuFrutas fr2("BANANA", "AMARELA", 86);

	MenuFrutas fr3("LARANJA", "LARANJA", 144);




	cout << "\n\n"<< "Dados da fruta 1" << "\n\n";
	
	cout << "Fruta: " <<fr1.geFruta();
	cout << "\n" <<"Cor: " << fr1.geCor();
	cout << "\n" <<"Peso: " << fr1.gePeso();

	

	cout << "\n\n"<< "Dados da fruta 2" << "\n\n";

	cout << "Fruta: " <<fr2.geFruta();
	cout << "\n" <<"Cor: " << fr2.geCor();
	cout << "\n" <<"Peso: " << fr2.gePeso();



	cout << "\n\n" << "Dados da fruta 3" << "\n\n";

	cout << "Fruta: " <<fr3.geFruta();
	cout << "\n" <<"Cor: " << fr3.geCor();
	cout << "\n" <<"Peso: " << fr3.gePeso();
	


}
