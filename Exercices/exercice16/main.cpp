#include <iostream>
#include <string>

using namespace std;

#include "Comunicador.h"
#include "Celular.h"
#include "Modem.h"

int main()
{ 


	{ // Bloco lim. 1
		const Comunicador com(321, "Claro", 45.95);
	
 		const Celular cel("ana", 29, 270001, 30, 123, "Carlos", 70);
 		
 		Modem m(120.0);
 		
 		float extra=1;
 		

 		
		// ** cel.setSMS(20);      Erro. N�o se altera objetos constantes..
		
		//***************************Objetos constantes**************************
		
	
		cout << "\n\n\n***************************Objetos constantes**************************\n\n\n";
		cout<<"---------------------------------------";
 		cout<<"Vinculacao Estatica:------------------------\n";
 		com.imprime(); //gera a sa�da utilizando vincula��o estatica
 		cout << "Calculo pre�o final: " << com.calcTotal(1) << endl;
 		
 		cel.imprime(); //gera sa�da usando vincula��o estatica

 		cout << "Calculo pre�o final sem modem: " << cel.calcTotal(extra) << endl;
 		
 		cout << "Calculo pre�o final com modem: " << cel.calcFin(m, extra) << endl;
 		cout<<"---------------------------------------";
		
		
		
		
		
	}
	
	{ // Bloco lim. 2
		
		
		
		Comunicador com(321, "Vivo", 45.95);
	
 		Celular cel("ana", 29, 270001, 30, 123, "Marcos", 70);
		
		Modem m(39.0);
 		
 		float extra=1;
		
		//cria um ponteiro para a superclasse e o inicializa
 		Comunicador *co = 0;
 		
 		//cria um ponteiro para a subclasse
 		Celular *ce= 0;
 		
     //*************************Objetos n�o constantes******************
     
     	cout << "\n\n\n\n*************************Objetos n�o constantes******************\n\n\n\n";
     	
		cel.setSMS(11);
		
 		cout<<"\nn---------------------Polimorfismo:------------------\nn";
		//aponta o ponteiro da superclasse para o objeto da subclasse
		co = &cel;
 		co->imprime(); //polimorfismo: chama imprime() da subclasse
 		cout<<endl;
 		
 		cout << "Calculo pre�o final sem modem: " << cel.calcTotal(1) << endl;
 		
 		cout << "Calculo pre�o final com modem: " << cel.calcFin(m, extra) << endl;
 		
		cout << "\n-----------------------------\n";
		
		com.imprime(); //gera a sa�da utilizando vincula��o estatica
 		cout << "Calculo pre�o final: " << com.calcTotal(extra) << endl;
		
		
		
		
	}



}
