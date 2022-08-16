#ifndef ROUPA_H
#define ROUPA_H
#include <iostream>

using namespace std;



class Roupa:public Produto   //Roupa herda de Produto
{
	protected:
		
	string marca;
	
	public:
		Roupa(string, int, string, float); //metodo construtor com repasse
		
		~Roupa();
		
		string getMarca();
	
		void setMarca(string);
	
		
	
};


#endif
