#include <iostream>
using namespace std;
#include "Ponto.h"
main()
{
	{
		const Ponto ponto(1,2); //objeto constante
		
		//objeto constante e m�todos constantes
		
		cout << "X: " << ponto.getX() << "Y: " << ponto.getY();
		
		cout << "Dist�ncia entre os pontos" << ponto.getX() << "e" << ponto.getY() << ":" << ponto.CalcDist();
		
		
	}
	
	{
		Ponto pont(5,2); //objeto n�o constante
		
		cout << "Dist�ncia entre os pontos" << pont.getX() << "e" << pont.getY() << ":" << pont.CalcDist();
		
		
		
		// pont.setsetX(20); - m�todo n�o const ;  Erro: n�o pode ser modificado o valor constante
	}
			
	
	

}
