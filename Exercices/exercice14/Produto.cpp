#include<iostream>

using namespace std;

#include "Produto.h"

	Produto::Produto(int c, string n, float p)
	{ setCod(c);
		setNome(n);
		setPreco(p);
	}

	Produto::~Produto()
	{ printf("\nFim de objeto de Produto...\n");
	}

	int Produto::getCod() { return cod; }
	string Produto::getNome() { return nome; }
	float Produto::getPreco() { return preco; }

	void Produto::setCod(int c) { cod = c; }
	void Produto::setNome(string n) { nome = n; }
	void Produto::setPreco(float p) { preco = p; }


	float calcPrecoFinal(Produto prod)
	{ return prod.preco * 1.4; }
