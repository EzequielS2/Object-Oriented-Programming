#include<iostream>
using namespace std;


#include "Produto.h"
#include "Lapis.h"

	Lapis::Lapis(float tam, int c, string n, float p)
	:Produto(c,n,p)
	{	setTamanho(tam);
	}

	Lapis::~Lapis()
	{	cout << "\nFim de objeto Lapis...\n" << endl;
	}

	float Lapis::getTamanho() { return tamanho; }
	void Lapis::setTamanho(float tam) { tamanho = tam; }

//fim da implementação de presunto.h


