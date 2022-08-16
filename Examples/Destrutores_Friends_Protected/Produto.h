#ifndef PRODUTO_H
#define PRODUTO_H

#include<string>
#include<iostream>

using namespace std;

class Produto
{
	protected:
		int cod;
		string nome;
		float preco;

	public:
		Produto(int, string, float);
		~Produto();
		int getCod();
		string getNome();
		float getPreco();
		void setCod(int);
		void setNome(string);
		void setPreco(float);
		friend float calcPrecoFinal(Produto);
};

#endif
