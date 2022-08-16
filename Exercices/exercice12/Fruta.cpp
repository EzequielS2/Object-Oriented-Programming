#include <string>
using namespace std;
#include "Produto.h"
#include "Fruta.h"


Fruta::Fruta(int d, float pes, int c, string nom, float pre)
:Produto(c, nom, pre) { //metodo construtor com repasse
 setDuracao(d);
 setPreco(pes);
 }
 
 int Fruta::getDuracao() { return duracao; }
 float Fruta::getPeso() { return peso; }
 void Fruta::setPeso(float pes) { peso=pes; }
 void Fruta::setDuracao(int d) { duracao = d; }


