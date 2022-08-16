#include <iostream>

using namespace std;

#include "Modem.h"

 	Modem::Modem(float cons)
 	{ 	setConsumo(cons);
 	}

 	Modem::~Modem()
 	{	 printf("\nFim de objeto de Celular...\n");
 	}

	float Modem::getConsumo() { return consumo; }
 	void Modem::setConsumo(float cons) { consumo = cons; } 
