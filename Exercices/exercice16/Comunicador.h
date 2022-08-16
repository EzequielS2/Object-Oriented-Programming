#ifndef COMUNICADOR_H
#define COMUNICADOR_H

#include <iostream>
#include <string>

using namespace std;

class Comunicador {
 	protected:
 		int cod;
 		string prestador;
		double plano;
 		
	public:
 		Comunicador(int, const string &, double);
 		
 		~Comunicador();
 		
		void setPrestador(const string &);
 		string getPrestador() const;
 		
		void setCodigo(int);
		int  getCodigo() const;
		
 		void setPlano(double);
 		double getPlano() const;
 		
		virtual double calcTotal(double const) const;
		
		virtual void imprime() const;
};
#endif

