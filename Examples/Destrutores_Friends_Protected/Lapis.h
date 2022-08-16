#ifndef LAPIS_H
#define LAPIS_H

#include<iostream>
using namespace std;

class Lapis: public Produto
{
	protected:
		float tamanho;
	public:
		Lapis(float, int , string, float );
		~Lapis();
		float getTamanho();
		void setTamanho(float);
		
};

#endif
