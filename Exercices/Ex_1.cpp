/*

Escreva um programa que contenha funções para calcular a soma, a
subtração, o produto e a divisão entre dois números inteiros.

No programa principal leia dois inteiros x e y e imprima o resultado da
soma, da subtração, do produto e da divisão entre os dois inteiros lidos
através das chamadas das funções.

Mostre também o resultado das seguintes expressões (usando as
funções, chamando uma dentro da chamada da outra):

((x + y) * (x - y))
((x * y) + (x / y))

*/



#include<iostream>

using namespace std;


int soma(int a, int b)
{
	int s = a+b;
	
	return s;
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

int divisao(int a,int b)
{
	int d=a/b;

	return d;
}


int main()
{

	int a, b;
		
	cout << "Digite o 1 número: ";
	cin >> a;
	
	cout << "Digite o 2 número: ";
	cin >> b;
	
	cout << "Soma: " << soma(a,b) << "\n";

	cout << "Subtração: " << subtracao(a,b) << endl;

	cout << "Multiplicação: " << multiplicacao(a,b) << endl;

	cout << "Divisão: " << divisao(a,b) << endl;

	cout << "Operação ((x + y) * (x - y)): " << multiplicacao(soma(a,b), subtracao(a,b)) << endl;

	cout << "Operação ((x * y) + (x / y)): " << soma(multiplicacao(a,b), divisao(a,b)) << endl;

	
}


	 	
