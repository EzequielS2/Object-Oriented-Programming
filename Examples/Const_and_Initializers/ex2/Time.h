#include<iostream>
using namespace std;
class Time{
	private:
		const int hora;
		const int minuto;
		const int segundo;
		
	public:
		Time(int,int, int);
		
		~Time();
		
		int getHora() const;
		int getMinuto() const;
		int getSegundo() const;
		void setHora(int);
		void setMinuto(int);
		void setSegundo(int);
		void imprimeUniversal() const;
		void imprimePadrao() const;
	};
