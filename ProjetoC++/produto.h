#ifndef PRODUTO_H	//evita erros de m�ltiplas defini��es (somente em arquivos .h)
#define PRODUTO_H

#include<iostream>
using namespace std;

class Produto
{	protected:	//protected como se fosse public para a heran�a, mas para alguma classe fora da herana�a como se fosse private
		const int cod;	//atributos constante, inicializador obrigat�rio
		string nome;
		float preco;
		
	public:		//m�todos
		Produto(int, const string &, float); 	//M�todo construtor 
			//strings s�o internamente referencias para valores constantes
		~Produto();	//M�todo destrutor
		
		int getCod() const;
		string getNome() const;
		float getPreco() const;
		
		//void setCod(int); //cod const, n�o tem setter
		void setNome(const string &);
		void setPreco(float);
		
		virtual void mostraProduto() const;
		
		friend float calcPrecoFinal(Produto); 
};

#endif
		
