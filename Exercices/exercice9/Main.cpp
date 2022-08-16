/*


Criar uma classe com atributos representando um objeto do mundo real, a
partir do qual se possa defnir pelo menos tr�s atributos. Desenhar a classe
com sua interface de objetos e implementar seus c�digos em C++. No
main(), criar dois objetos passando valores quaisquer para seus atributos
atrav�s do m�todo construtor e em seguida os imprimir.

*/




             //DESENHO


/*


      ///////////////////////////////////
      //             Caneta            //
      ///////////////////////////////////
                      I
                      I
      ///////////////////////////////////
      //             Caneta           ///
      ///////////////////////////////////
      // - cor: string                 //
      // - tipo: string                //
      // - peso: float                 //
      ////////////////////////////////////////////////////////////////
      // + <<create>> Caneta(c : string, t : string, p : float)     //
      // + geCor(): string                                          //
      // + geTipo(): string                                         //
	  // + gePeso(): float                                          //
      // + seCor(c : string): void                                  //
      // + seTipo(t : string): void                                 //
      // + sePeso(p : float): void                                  //
      ////////////////////////////////////////////////////////////////




*/





#include<iostream>

#include<string>

using namespace std;

#include "Ex9.h"   



int main()
{
		Caneta c1("Azul", "Tinteiro", 0.3);
		
		Caneta c2("Vermelho", "Esferogr�fica", 0.3);
		
		cout << "Informa��es da Caneta 1" << "\n\n";
		
		cout << "Cor: " << c1.geCor() << endl  << "Tipo: " << c1.geTipo() << 
		endl << "Peso: " << c1.gePeso() << "\n\n";
		
		cout << "Informa��es da caneta 2" << "\n\n";
		
		cout << "Cor: " << c2.geCor() << endl  << "Tipo: " << c2.geTipo() << 
		endl << "Peso: " << c2.gePeso() << "\n\n";
		
		
}




