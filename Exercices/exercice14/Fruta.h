#ifndef FRUTA_H
#define FRUTA_H
#include <iostream>

using namespace std;



class Fruta:public Produto   //Roupa herda de Produto
{
	protected:
		
	string cor;
	
	public:
		Fruta(string, int, string, float); // Metodo construtor com repasse
		
		~Fruta(); // Destrutor
		
		string getCor(); // Getter
	
		void setCor(string); // Setter
	
		
	
};


#endif
