

/*

 Reescrever o programa em C++ do exemplo abaixo, utilizando interfaces de
objetos e métodos construtores na herança. No main(), criar dois objetos
passando valores quaisquer para seus atributos através do método
construtor e em seguida os imprimir.



*/




#include <iostream>
#include <string>
using namespace std;

//depois do using namespace
#include "Veiculo.h"
#include "Carro.h"
#include "Moto.h"

main()
{	

	Moto moto("Honda", 10, 50.1, 100); 

	Carro carro("Ford ", 60, 120.5, 4);
	
	
	cout << "\nCarro:" << carro.getMarca() << "\n\nTanque: " << carro.getTanque() << "\nConsumo: " << carro.getConsumo()
	<< "\nAutonomia: " << carro.calcAutonomia() << "\nPortas: "<< carro.getPortas() << endl;

	cout << "--------------------------------------------------------------------------";
	
	cout << "\n\n\nMoto:" << moto.getMarca() << "\n\nTanque: " << moto.getTanque() << "\nConsumo: " << moto.getConsumo()
	<< "\nAutonomia: " << moto.calcAutonomia() << "\nTempo Motor: "<< moto.getTemposMotor() << endl;

}

