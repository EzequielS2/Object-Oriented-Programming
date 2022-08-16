#include <iostream>

using namespace std;

#include "Queijo.h"

	Queijo::Queijo(float pe)
	{ setPeso(pe);
	}
	
	Queijo::~Queijo()
	{ printf("\nFim de objeto de Presunto...\n");
	}
	
	float Queijo::getPeso() { return peso; }
	
	void Queijo::setPeso(float p) { peso = p; }
