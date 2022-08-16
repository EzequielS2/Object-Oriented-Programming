#include<string>

#include "Livro.h"
#include "Ficcao.h"

using namespace std;

	Ficcao::Ficcao(int c, float p, string n, int q)
    :Livro(n, q) { //metodo construtor com repasse
     setC(c);
     setP(p);
    }
 
   int Ficcao::getC() { return codi; }
   float Ficcao::getP() { return prec; }
   void Ficcao::setC(int c) { codi = c; }
   void Ficcao::setP(float p) { prec = p; }


