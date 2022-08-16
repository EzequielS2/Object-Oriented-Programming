#include <iostream>
using namespace std;
#include "Time.h"
main()
{
	{
		Time noite(18,0,0); //objeto n�o constante
		const Time dia(5,45,0); //objeto constante
		
		//objeto constante e m�todos constantes
		cout << dia.getHora() << endl;
		dia.imprimeUniversal();
		dia.imprimePadrao();
	}
	
	{
		Time noite(18,0,0); //objeto n�o constante
		Time dia(5,45,0); //objeto constante
		
		//objeto n�o constante
		noite.imprimePadrao(); //m�todo const
		noite.imprimeUniversal(); //m�todo const
		noite.setHora(20); //m�todo n�o const
		noite.imprimeUniversal(); //m�todo const
		noite.imprimePadrao(); //m�todo const
	}
	
	{
		Time noite(18,0,0); //objeto n�o constante
		const Time dia(5,45,0); //objeto constante
		
		//objeto n�o constante
		noite.setHora(20);//m�todo n�o const
		cout << noite.getHora() << endl; //m�todo const
		cout << noite.getMinuto() << endl; //m�todo const
		
		//objeto constante n�o pode ser modificado
		//comente para compilar
		//dia.setHora(7);
	}
}
