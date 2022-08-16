#ifndef QUEIJO_H
#define QUEIJO_H

#include<iostream>
using namespace std;

class Queijo
{
	protected:
		float peso;
	public:
		Queijo(float);
		~Queijo();
		float getPeso();
		void setPeso(float);
		friend class Presunto; //classe amiga
};

#endif
