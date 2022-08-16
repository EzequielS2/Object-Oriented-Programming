#include <iostream>

using namespace std;

#include "Produto.h"
#include "Presunto.h"
#include "Queijo.h"

	Presunto::Presunto

	(string m, int c, string n, float p):Produto(c, n, p)
	{ setMarca(m); //peso será setado com calcPeso
	}
	
	Presunto::~Presunto()
	{ printf("\nFim de objeto de Presunto...\n");
	}
	
	string Presunto::getMarca() { return marca; }
	float Presunto::getPeso() { return peso; }
	
	void Presunto::setMarca(string m) { marca= m; }
	void Presunto::setPeso(float p) { peso = p; }
	
	float Presunto::calcPeso(Queijo q)
	{ return q.peso * 2/3; }
