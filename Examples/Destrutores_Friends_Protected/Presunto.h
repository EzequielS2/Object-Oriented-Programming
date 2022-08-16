#ifndef PRESUNTO_H
#define PRESUNTO_H

#include<iostream>
using namespace std;

class Queijo;

class Presunto:public Produto
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

		float calcPeso(Queijo); //metodo que acessa o obj de Queijo
};

#endif
