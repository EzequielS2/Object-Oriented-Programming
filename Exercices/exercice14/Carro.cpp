#include <iostream>

using namespace std;

#include "Produto.h"
#include "Carro.h"

	Carro::Carro(string m, int c, string n, float p):Produto(c, n, p)
	{ setMarca(m); 
	}
	
	Carro::~Carro()
	{ printf("\nFim de objeto de Carro...\n");
	}
	
	string Carro::getMarca() { return marca; }
	
	void Carro::setMarca(string m) { marca= m; }
