#include <iostream>

using namespace std;

#include "Produto.h"
#include "Roupa.h"

	Roupa::Roupa(string m, int c, string n, float p):Produto(c, n, p)
	{ setMarca(m); 
	}
	
	Roupa::~Roupa()
	{ printf("\nFim de objeto de Roupa...\n");
	}
	
	string Roupa::getMarca() { return marca; }
	
	void Roupa::setMarca(string m) { marca= m; }

