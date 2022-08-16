/*

Desenhe um diagrama e escreva um código para uma classe que
representa uma equação, com atributos inteiros x e y, métodos para calcular
a soma, a subtração, o produto e a divisão entre dois números inteiros (os
atributos x e y) e um método para calcular a seguinte expressão (usando os
outros métodos da classe):
((x + y) + (x – y)) - ((x * y) + (x / y))
Na main, crie um objeto da classe, leia dois inteiros x e y, atribua os
valores lidos aos atributos do objeto, imprima os resultados de todos os
métodos do objeto.

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

	

	cout << "Digite um número: ";
	
	cin >> p.a;
	
	cout << "Digite outro número: ";
	
	cin >> p.b;
	    
	 
	
	cout << "\n\n"<<"Operações" << "\n\n";
	
	cout << "\n\n"<<"Soma: " << p.soma(p.a,p.b);
	
	cout << "\n\n"<<"Subtração: " << p.subtracao(p.a,p.b);
	
	cout << "\n\n" << "Multiplicação: " << p.multiplicacao(p.a,p.b);
	
	cout << "\n\n" << "Divisão: " << p.divisao(p.a,p.b);
	
	cout << "\n\n" << "Operação: ((x + y) + (x – y)) - ((x * y) + (x / y)): " << p.Op(p.a,p.b);

	
}	
	
	
	
	













	
	
	





		
	

	

	
		
	
	
