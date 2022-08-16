#include <iostream>
#include <string>

using namespace std;

#include "Comunicador.h"

	Comunicador::Comunicador
	(int c, const string &n, double pl)
	{
	cod=c;	
 	prestador = n; //constantes podem ser atribuidas diretamente
 	setPlano(pl);
	}

	Comunicador::~Comunicador() { cout << "\nFim objeto Comunicador\n";}

	
		// getters e setters 
		
	void Comunicador::setPrestador(const string &n) { prestador=n; }
	string Comunicador::getPrestador() const { return prestador; }
	
	
	void Comunicador::setPlano(double pl) {
	 plano = (pl < 0.0) ? 0.0 : pl;
	}
	double Comunicador::getPlano() const { return plano; }

	
	
	double Comunicador::calcTotal(double const extras) const {
 	return extras+plano;
	}


	void Comunicador::imprime() const {
 	cout << "Código: " << cod <<"\nPrestador: " << prestador
 	<< "\nPlano: " << plano << endl;
	}

