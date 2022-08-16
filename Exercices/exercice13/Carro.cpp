#include<string>

#include "Veiculo.h"
#include "Carro.h"

using namespace std;

		Carro :: Carro(string m, int t, float c, int p): Veiculo(m, t, c){
			
			setPortas(p);
		}
		
		
		int Carro:: getPortas() { return portas; }
		
		void Carro:: setPortas(int p) { portas = p; }


