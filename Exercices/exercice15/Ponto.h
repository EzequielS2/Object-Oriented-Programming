#include<iostream>

using namespace std;


class Ponto{
	private:
		float x;
		float y;
	
		
	public:
		Ponto(float,float);
		
		~Ponto();   // Destrutor
		
		
		// getters são declarados como const
		
		float getX() const;
 		float getY() const;
 		
 		// Setters
 		
 		void setY(float);
 		void setX(float);
 				

		void imprimePonto() const;
		
		float calcDistancia(Ponto) const;
		
};
