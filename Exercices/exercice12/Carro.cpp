#include<string>
using namespace std;
#include "Produto.h"
#include "Carro.h"



	Carro::Carro(int port, float tan, int c, string nom, float pre)
    :Produto(c, nom, pre) { //metodo construtor com repasse
     setPortas(port);
     setTanque(tan);
    }
 
   int Carro::getPortas() { return portas; }
   float Carro::getTanque() { return tanque; }
   void Carro::setPortas(int port) { portas = port; }
   void Carro::setTanque(float tan) { tanque = tan; }


