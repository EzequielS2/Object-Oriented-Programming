#ifndef MODEM_H
#define MODEM_H

#include <iostream>

using namespace std;

class Modem
{ 
	protected:
 		float consumo;
 		
 	public:
 		Modem(float);
 		
 		~Modem(); // Destrutor 
 		
 		float getConsumo(); // Setter 
 		void setConsumo(float); // Getter 
 		
 		friend class Celular; //classe amiga
};
#endif

