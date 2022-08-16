#include <iostream>
#include <iomanip>
#include <math.h>
#include "Ponto.h"

using namespace std;


	
	Ponto::Ponto(float ox,float oy) {
 		setX(ox);
 		setY(oy);
 		
	}
	
	Ponto::~Ponto() { cout << "\nFim objeto Ponto.\n" << endl; }



	void Ponto::setX(float ox) {
 		x=ox; //valida x
	}
	
	void Ponto::setY(float oy) {
 		y=oy; //valida y
	}

	float Ponto::getX() const { return x; }
	float Ponto::getY() const { return y; }
	
	
	void Ponto::imprimePonto() const {
 		 cout << "\n->(" << x << "," << y << ")\n" << endl; 
	}
	
	
	
	float Ponto::calcDistancia(Ponto outro) const {return sqrt(pow(x-outro.x, 2)+pow(y-outro.y, 2));}
	



