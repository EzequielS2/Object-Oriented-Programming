#ifndef PRESUNTO_H
#define PRESUNTO_H
#include <iostream>
using namespace std;

class Queijo;

class Presunto:public Produto  // Presunto herda de Produto
{
	protected:
		string marca;
		float peso;
			
	public:
		
		Presunto(string, int, string, float);
		~Presunto();	
				
		string getMarca();
		float getPeso();
		
		void setMarca(string);
		void setPeso(float);
		
		float calcPeso(Queijo);
};
#endif
