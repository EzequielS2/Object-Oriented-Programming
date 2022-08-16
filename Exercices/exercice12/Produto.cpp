#include <string>
using namespace std;
#include "Produto.h"


 //metodo construtor

    Produto:: Produto(int c, string nom, float p){ setNome(nom); setPreco(p); setCod(c);}
     
	 //setter
	 
    void Produto :: setNome(string no){ nome=no;}
    
    
    void Produto:: setCod(int co){cod=co;}
    
    void Produto::setPreco(float p){ preco=p;}
    
	//getter
	
    string Produto::getNome(){ return nome; }
    
    int Produto::getCod(){ return cod; }
    
    float Produto::getPreco(){ return preco; }
    
    
    float Produto::CalcPrecoFinal(){return preco*1.4;}
	

    
//fim das implementações


