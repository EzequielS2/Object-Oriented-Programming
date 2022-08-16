#include <string>
using namespace std;
#include "Livro.h"


 Livro::Livro(string n, int q){setNome(n); setQuant(q);}
 
 string Livro::getNome() { return nome; }
 
 int Livro::getQuant() { return quantidade;}
 
 void Livro::setNome(string n) { nome = n; }
 
 void Livro::setQuant(int q) { quantidade = q; }

