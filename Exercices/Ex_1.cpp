/*

Escreva um programa que contenha fun��es para calcular a soma, a
subtra��o, o produto e a divis�o entre dois n�meros inteiros.

No programa principal leia dois inteiros x e y e imprima o resultado da
soma, da subtra��o, do produto e da divis�o entre os dois inteiros lidos
atrav�s das chamadas das fun��es.

Mostre tamb�m o resultado das seguintes express�es (usando as
fun��es, chamando uma dentro da chamada da outra):

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
		
	cout << "Digite o 1 n�mero: ";
	cin >> a;
	
	cout << "Digite o 2 n�mero: ";
	cin >> b;
	
	cout << "Soma: " << soma(a,b) << "\n";

	cout << "Subtra��o: " << subtracao(a,b) << endl;

	cout << "Multiplica��o: " << multiplicacao(a,b) << endl;

	cout << "Divis�o: " << divisao(a,b) << endl;

	cout << "Opera��o ((x + y) * (x - y)): " << multiplicacao(soma(a,b), subtracao(a,b)) << endl;

	cout << "Opera��o ((x * y) + (x / y)): " << soma(multiplicacao(a,b), divisao(a,b)) << endl;

	
}


	 	
