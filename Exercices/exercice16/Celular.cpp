#include <iostream>
#include <string>

using namespace std;

# include "Modem.h"
#include "Celular.h"



		Celular::Celular(const string &p, int d, int n, double l, int c, const string &pr, double pl)
		:Comunicador(c, pr, pl)
		{
			setProprietario(p);
			setDDD(d);
			setNum(n);
			setLigacoes(l);
			
		}
			
 		
 		Celular::~Celular() { cout<< "\n------------Fim objeto Celular---------\n";}
 		
 		void Celular::setProprietario(const string &p){proprietario=p;}
		string Celular::getProprietario() const{return proprietario;}
 		
 		void Celular::setDDD(int d){ddd=d;}
		int  Celular::getDDD() const{return ddd;}
		
		void Celular::setNum(int n){num=n;}
		int  Celular::getNum() const{return num;}
		
		void Celular::setSMS(int s){sms=s;} 
		int  Celular::getSMS() const{return sms;}
 		
 		void Celular::setLigacoes(double l){ligacoes=l;}
 		double Celular::getLigacoes() const{return ligacoes;}
 		
 		float Celular::calcFin(Modem m, float extras) const{ return m.consumo+plano+sms+ligacoes+extras;}
 		
		double Celular::calcTotal(double const extras) const{ return plano+sms+ligacoes+extras;}
		
		void Celular::imprime() const{
			
			cout << "Prestador: "<< prestador <<
			"\nCódigo: " << cod <<
			"\nPlano: " << plano <<
			"\n\nProprietario: " << proprietario
			<< "\nDDD: " << ddd << " - Número: "<< num <<
			"\nQuantidadede SMS: " << sms
			<< "\nQuantidadede Ligaçôes: " << ligacoes << endl;	
		
		}
