
//Arquivo "Produto.cpp"

#include<iostream>
using namespace std;

#include "produto.h"

	Produto::Produto(int c, const string &n, float p)
		:cod(c), nome(n), preco(p) //inicializadores
	{	
	}
	Produto::~Produto() { cout << "\nFim do objeto de Produto...\n\n" << endl;}
	
	//getters
	int Produto::getCod() const {return cod;}
	string Produto::getNome() const { return nome; }
	float Produto::getPreco() const { return preco; }
	
	//setters
	void Produto::setNome(const string &n) { nome = n; }
	void Produto::setPreco(float p) { preco = p; }

	
	void Produto::mostraProduto() const
	{
		cout << "Codigo: " << getCod() 
			<< "\nNome:  " << getNome() 
			<< "\nPreÃ§o: R$ " << getPreco() << endl;
	}
	

//fim implementação de Produto.h
