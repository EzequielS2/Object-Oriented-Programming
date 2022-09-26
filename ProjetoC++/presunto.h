//Arquivo "presunto.h"

#ifndef PRESUNTO_H
#define PRESUNTO_H

#include<iostream>
using namespace std;

class Queijo;	//predefinição (friend)

class Presunto:public Produto
{	
	protected:
		string marca;
		float peso;
		
	public:
		Presunto(const string &, int, const string &, float); //método contrutor
		~Presunto(); //Método destrutor
		
		string getMarca() const;
		float getPeso() const;
		void setMarca(const string &);
		void setPeso(float);
		
		float calcPeso(Queijo);
		
		//sobreposição
		void mostraProduto() const;
		
};

#endif
