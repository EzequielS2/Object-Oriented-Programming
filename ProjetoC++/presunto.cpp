//Arquivo "presunto.cpp"

#include <iostream>
using namespace std;

#include "produto.h"
#include "presunto.h"
#include "queijo.h"

	Presunto::Presunto(const string &m, int c, const string &n, float p)
	 	:Produto(c, n, p)
	{	
		setMarca(m); //peso ser� setado com calcPeso
	}
	Presunto::~Presunto() {	cout<<"\nFim de objeto de Presunto.\n"<< endl;}
	
	string Presunto::getMarca() const {return marca;}
	float Presunto::getPeso() const {return peso;}
	
	void Presunto::setMarca(const string &m){marca = m;}
	void Presunto::setPeso(float p){peso = p;}
	
	//m�todo usado por classe friend
	float Presunto::calcPeso(Queijo q) 
	{ return q.peso * 2/3; }

	//sobreposi��o
	void Presunto::mostraProduto() const 
	{
		cout << "\n\nCodigo: "<< getCod() 
			<< "\nMarca: " << getMarca() 
			<< "\nNome: " << getNome() 
			<< "\nPeso:  " << getPeso()
			<< "\nPreço: R$ " << getPreco();
	}

//fim da implementa��o de Presunto.h
