#include <iostream>

using namespace std;

#include "Ponto.h"

int main()
{
	{	// Bloco 1
		cout<<"\n\n-------------------------------------------------\n\n";
		Ponto a2(18,0); //objeto não constante
		const Ponto a1(0,0); //objeto constante
		
		//objeto constante, objeto n�o constante e métodos constantes
		
		cout << "P1 - x: "<<a1.getX() << ", y: "<< a1.getY() << endl; //objeto constante e método const
			cout << "\nP2 - x: "<<a2.getX() << ", y: "<< a2.getY() << endl; //objeto n�o constante e método const
		
		cout << "\nPontos: " << endl;
		a1.imprimePonto(); //objeto constante e método const
		a2.imprimePonto(); // objeto n�o constante
		
		cout << "Distancia entre P1 e P2: "
		<<a2.calcDistancia(a1) << endl; //objeto constante, objeto n�o constante e método const
		cout<<"\n\n-------------------------------------------------\n\n";
	
	
	}
	
	{ // Bloco 2
	
		const Ponto a1(0,0); //objeto constante
		Ponto a2(5,45);  //objeto não constante
		
		//objeto não constante e objeto constante
		
		cout<<"\n\n-------------------------------------------------\n\n";	
		cout << "Pontos: " << endl;
		a2.imprimePonto(); //método const
		a1.imprimePonto(); //método const
		
		cout << "\nDistancia: " << 
		a2.calcDistancia(a1)<< endl;  //método const
		
		cout<<"\n\n-------------------------------------------------\n\n";
		a2.setX(20); //método não const
		a2.setY(30); //método não const
		
		cout << "\nPontos: " << endl;
		a2.imprimePonto(); //método const
		a1.imprimePonto(); // objeto constante
		
		cout << "\nDistancia entre os pontos: " << 
		a2.calcDistancia(a1) << endl;  //método const 
		cout<<"\n\n-------------------------------------------------\n\n";
	}
	
	{  // Bloco 3
	
		const Ponto a1(12,1); //objeto não constante
		const Ponto a2(0,0); //objeto constante
		
		//objetos constantes
		
		cout<<"\n\n-------------------------------------------------\n\n";
		
		cout << "P1 - x: "<<a1.getX() << ", y: " << a1.getY() << endl; //método const
		cout << "\nP2 - x: "<<a2.getX() << ", y: " << a2.getY() << endl; //método const
		
		cout << "\nPontos: " << endl;
		a2.imprimePonto(); //método const
		a1.imprimePonto(); // objeto constante
		
		cout << "\nDistancia entre P1 e P2: " << 
		a1.calcDistancia(a2) << endl;  //método const 
		
	
		cout<<"\n\n-------------------------------------------------\n\n";
		
		//objeto constante não pode ser modificado
		
	}
}
