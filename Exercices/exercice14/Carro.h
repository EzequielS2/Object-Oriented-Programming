#ifndef CARRO_H
#define CARRO_H
#include <iostream>

using namespace std;



class Carro:public Produto   //Carro herda de Produto
{
	protected:
		
	string marca;
	
	public:
		Carro(string, int, string, float); //metodo construtor com repasse
		
		~Carro(); // Destrutor
		
		
		
		string getMarca(); // Getter
	
	
		
		void setMarca(string); 	// Setter
	
		
	
};


#endif
