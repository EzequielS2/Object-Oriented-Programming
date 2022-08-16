#include<iostream>
#include<iomanip>
#include "Time.h"

using namespace std;

	Time::Time(int h, int m, int s)
					: hora(h), minuto(m), segundo(s)
	{
		
	}
	
	 
	 Time::~Time() { cout << "Fim objeto Time." << endl; }
	 
	 void Time::setHora(int h) 
	 {
	 	 int const hora = ( h>=0  && h < 24) ? h : 0; 
	 }
	 
	 void Time::setMinuto(int m) 
	 {
	 	 int  const minuto = ( m>=0 && m < 60 ) ? m : 0; 
	 }
	 
	 void Time::setSegundo(int s) 
	 {
	 	 int const segundo = ( s >=0 && s < 60 ) ? s : 0; 
	 }
	 int Time::getHora() const { return hora; }
	 int Time::getMinuto() const {return minuto; }
	 int Time::getSegundo() const {return segundo; }
	 
	 void Time::imprimeUniversal() const {
	 	cout << setfill('0') << setw(2) << hora
	 		<< ":" << setw(2) << minuto
	 		<< ":" << setw(2) << segundo << endl;
	 }
	 
	 void Time::imprimePadrao() const {
	 	cout << ((hora == 0 || hora == 12) ? 12 : hora%12)
	 		<< ":" << setfill('0') << setw(2) << minuto
	 		<< ":" << setw(2) << segundo
	 		<< (hora<12 ? "AM" : "PM") << endl;
	 }
	 
