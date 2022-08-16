/*

Desenhe um diagrama e escreva um c�digo para uma classe que
representa uma equa��o, com atributos inteiros x e y, m�todos para calcular
a soma, a subtra��o, o produto e a divis�o entre dois n�meros inteiros (os
atributos x e y) e um m�todo para calcular a seguinte express�o (usando os
outros m�todos da classe):
((x + y) + (x � y)) - ((x * y) + (x / y))
Na main, crie um objeto da classe, leia dois inteiros x e y, atribua os
valores lidos aos atributos do objeto, imprima os resultados de todos os
m�todos do objeto.

*/



//DESENHO

/*
     
      ///////////////////////////////////
      //             Operacao         ///
      ///////////////////////////////////
      // + a: int                      //
      // + b: int                      //
      //                               //
      /////////////////////////////////////////////////
      // + soma(a: int, b: int): int                 //
      // + subtracao(a: int, b: int): int            //
      // + multiplicacao(a: int, b: int): int        //
      // + divisao(a: int, b: int): int              //
      // + Op(a: int, b: int): int                   //
      /////////////////////////////////////////////////




*/






#include<iostream>

using namespace std;

class Operacao
{
	public:
	
	int a,b;

	public:
	
	int soma(int a, int b)
	{
	
	
		return a+b;
	}


	int subtracao(int a, int b)
	{
		int su=a-b;
	
		return su;
	}


	int multiplicacao(int a, int b)
	{
		int m=a*b;
	
		return m;
	}

	int divisao(int a, int b)
	{
		int d=a/b;

		return d;
	}
	
	int Op(int a, int b)
	{
		return(subtracao(soma(soma(a,b), subtracao(a,b)),soma(multiplicacao(a,b), divisao(a,b))));
	}
};

int main()
{
	Operacao p;

	

	cout << "Digite um n�mero: ";
	
	cin >> p.a;
	
	cout << "Digite outro n�mero: ";
	
	cin >> p.b;
	    
	 
	
	cout << "\n\n"<<"Opera��es" << "\n\n";
	
	cout << "\n\n"<<"Soma: " << p.soma(p.a,p.b);
	
	cout << "\n\n"<<"Subtra��o: " << p.subtracao(p.a,p.b);
	
	cout << "\n\n" << "Multiplica��o: " << p.multiplicacao(p.a,p.b);
	
	cout << "\n\n" << "Divis�o: " << p.divisao(p.a,p.b);
	
	cout << "\n\n" << "Opera��o: ((x + y) + (x � y)) - ((x * y) + (x / y)): " << p.Op(p.a,p.b);

	
}	
	
	
	
	













	
	
	





		
	

	

	
		
	
	
