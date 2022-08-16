#include <iostream>
using namespace std;
#include "Time.h"
main()
{
	{
		Time noite(18,0,0); //objeto não constante
		const Time dia(5,45,0); //objeto constante
		
		//objeto constante e métodos constantes
		cout << dia.getHora() << endl;
		dia.imprimeUniversal();
		dia.imprimePadrao();
	}
	
	{
		Time noite(18,0,0); //objeto não constante
		Time dia(5,45,0); //objeto constante
		
		//objeto não constante
		noite.imprimePadrao(); //método const
		noite.imprimeUniversal(); //método const
		noite.setHora(20); //método não const
		noite.imprimeUniversal(); //método const
		noite.imprimePadrao(); //método const
	}
	
	{
		Time noite(18,0,0); //objeto não constante
		const Time dia(5,45,0); //objeto constante
		
		//objeto não constante
		noite.setHora(20);//método não const
		cout << noite.getHora() << endl; //método const
		cout << noite.getMinuto() << endl; //método const
		
		//objeto constante não pode ser modificado
		//comente para compilar
		//dia.setHora(7);
	}
}
