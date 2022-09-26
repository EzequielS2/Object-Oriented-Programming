#include<iostream>
using namespace std;

#include"queijo.h"

	Queijo::Queijo(float pe): peso(pe)
	{	
	}
	
	Queijo::~Queijo() {	cout<<"\nFim de objeto de Peso...\n"<< endl;}
	
	float Queijo:: getPeso() const { return peso; }
	void Queijo:: setPeso(float p) { peso = p; }

	//sobrecarga
	float Queijo::calcTotal(float embalagem, float entrega) const
	{return peso*1.2*embalagem + entrega;}
	
//fim da implementação da classe Queijo
