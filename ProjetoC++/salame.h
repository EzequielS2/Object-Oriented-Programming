#ifndef SALAME_H
#define SALAME_H

#include<iostream>
using namespace std;

class Queijo; //predefinição (friend)

class Salame:public Produto
{	
	protected:
		string marca;
		float peso;
		
	public:
		Salame(const string &, int, const string &, float);
		~Salame();
		string getMarca() const;
		float getPeso() const;
		
		void setMarca(const string &);
		void setPeso(float);
		
		float calcPeso(Queijo);
		
		//sobreposição
		void mostraProduto() const;
};

#endif
