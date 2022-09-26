#ifndef PRODUTO_H	//evita erros de múltiplas definições (somente em arquivos .h)
#define PRODUTO_H

#include<iostream>
using namespace std;

class Produto
{	protected:	//protected como se fosse public para a herança, mas para alguma classe fora da heranaça como se fosse private
		const int cod;	//atributos constante, inicializador obrigatório
		string nome;
		float preco;
		
	public:		//métodos
		Produto(int, const string &, float); 	//Método construtor 
			//strings são internamente referencias para valores constantes
		~Produto();	//Método destrutor
		
		int getCod() const;
		string getNome() const;
		float getPreco() const;
		
		//void setCod(int); //cod const, não tem setter
		void setNome(const string &);
		void setPreco(float);
		
		virtual void mostraProduto() const;
		
		friend float calcPrecoFinal(Produto); 
};

#endif
		
