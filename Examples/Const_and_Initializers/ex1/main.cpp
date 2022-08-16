#include <iostream>
using namespace std;
#include "Ponto.h"
main()
{
	{
		const Ponto ponto(1,2); //objeto constante
		
		//objeto constante e métodos constantes
		
		cout << "X: " << ponto.getX() << "Y: " << ponto.getY();
		
		cout << "Distância entre os pontos" << ponto.getX() << "e" << ponto.getY() << ":" << ponto.CalcDist();
		
		
	}
	
	{
		Ponto pont(5,2); //objeto não constante
		
		cout << "Distância entre os pontos" << pont.getX() << "e" << pont.getY() << ":" << pont.CalcDist();
		
		
		
		// pont.setsetX(20); - método não const ;  Erro: não pode ser modificado o valor constante
	}
			
	
	

}
