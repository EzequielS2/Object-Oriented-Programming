//Arquivo "presunto.h"

#ifndef PRESUNTO_H
#define PRESUNTO_H

#include<iostream>
using namespace std;

class Queijo;	//predefini��o (friend)

class Presunto:public Produto
{	
	protected:
		string marca;
		float peso;
		
	public:
		Presunto(const string &, int, const string &, float); //m�todo contrutor
		~Presunto(); //M�todo destrutor
		
		string getMarca() const;
		float getPeso() const;
		void setMarca(const string &);
		void setPeso(float);
		
		float calcPeso(Queijo);
		
		//sobreposi��o
		void mostraProduto() const;
		
};

#endif
