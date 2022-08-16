#include <iostream>

using namespace std;

#include "Produto.h"
#include "Fruta.h"

	Fruta::Fruta(string co, int c, string n, float p):Produto(c, n, p)
	{ setCor(co); 
	}
	
	Fruta::~Fruta()
	{ printf("\nFim de objeto de Fruta...\n");
	}
	
	string Fruta::getCor() { return cor; }
	
	void Fruta::setCor(string co) { cor=co; }

