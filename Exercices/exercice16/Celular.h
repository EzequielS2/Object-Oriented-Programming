#ifndef CELULAR_H
#define CELULAR_H
#include <iostream>
#include <string>

using namespace std;

#include "Comunicador.h"

class Modem;

class Celular : public Comunicador {
 	private:
 		string proprietario;
 		int ddd;
 		int num; 
 		int sms;
 		double ligacoes;
	public:
 		Celular(const string &, int, int, double, int, const string &, double);
 		
 		~Celular();
 		
 		void setProprietario(const string &);
 		string getProprietario() const;
 		
 		void setDDD(int);
		int  getDDD() const;
		
		void setNum(int);
		int  getNum() const;
		
		void setSMS(int);
		int  getSMS() const;
 		
 		void setLigacoes(double);
 		double getLigacoes() const;
 		
 		float calcFin(Modem, float) const;
 		
		virtual double calcTotal(double const) const;
		virtual void imprime() const;
};
#endif
