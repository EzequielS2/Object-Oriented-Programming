#include<iostream>
#include<iomanip>
#include "Ponto.h"

using namespace std;

	Ponto::Ponto(float xp, float yp)
					: x(xp), y(yp)
	{
		
	}
	
		
	 
	 Ponto::~Ponto() { cout << "Fim objeto Ponto." << endl; }
	 
	 void Ponto::setX(float xp) 
	 {
	 	float const x=xp; 
	 }
	 
	 void Ponto::setY(float yp) 
	 {
	 	 float const y=yp; 
	 }
	 
	
	 float Ponto::getX() const { return x; }
	 float Ponto::getY() const {return y; }
	 
	
	 
	 float Ponto::CalcDist() const {
	 	if(x<y)
	 	return y-x;
		 else if(x>y)
		 return x-y;
		 else
		 return 0;
		
	 }
	 
