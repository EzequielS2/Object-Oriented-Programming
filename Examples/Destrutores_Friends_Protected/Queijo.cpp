#include<iostream>
using namespace std;

#include "Queijo.h"

	Queijo::Queijo(float pe)
	{	setPeso(pe);
	}

	Queijo::~Queijo()
	{	cout << "\nFim de objeto de Presunto...\n" << endl;
	}

	float Queijo::getPeso() { return peso; }
	void Queijo::setPeso(float p) { peso = p; }

//fim da implementação de presunto.h


