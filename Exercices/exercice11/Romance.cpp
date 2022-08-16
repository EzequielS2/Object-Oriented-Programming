#include <string>
using namespace std;
#include "Livro.h"
#include "Romance.h"


Romance::Romance(int c, float p, string n, int q)
:Livro(n, q) { //metodo construtor com repasse
 setCod(c);
 setPr(p);
 }
 
 int Romance::getCod() { return codigo; }
 float Romance::getPr() { return preco; }
 void Romance::setCod(int c) { codigo = c; }
 void Romance::setPr(float p) { preco = p; }

//fim da implementação 
