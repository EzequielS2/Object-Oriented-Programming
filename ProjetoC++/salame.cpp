#include <iostream>
using namespace std;

#include "produto.h"
#include "salame.h"
#include "queijo.h"

	Salame::Salame(const string &m, int c, const string &n, float p)
		:Produto(c, n, p)
	{	
		setMarca(m); //peso será setado com calcPeso
	}
	
	Salame::~Salame() {	cout << "\nFim de objeto de Salame.\n" << endl;}
	
	string Salame::getMarca() const {return marca;}
	float Salame::getPeso() const {return peso;}
	
	void Salame::setMarca(const string &m) {marca = m;}
	void Salame::setPeso(float p) {peso = p;}
	
	float Salame::calcPeso(Queijo q) 
	{ return q.peso * 2/3;}

	void Salame::mostraProduto() const 
	{	
		cout << "\n\nCodigo: " << getCod() 
			<< "\nMarca: " << getMarca() 
			<< "\nNome: " << getNome() 
			<< "\nPeso: "<< getPeso() 
			<< "\nPreÃ§o: R$ " << getPreco();
	}
	
//fim da implementação de Salame

