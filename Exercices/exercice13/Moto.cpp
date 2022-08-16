#include <string>
using namespace std;
#include "Veiculo.h"
#include "Moto.h"


        Moto :: Moto(string m, int t, float c, int tm): Veiculo(m, t, c){
			
			setTemposMotor(tm);
		}
		
		
		int Moto::  getTemposMotor() { return TemposMotor; }
		
		void Moto:: setTemposMotor(int tm) {  TemposMotor = tm; }


