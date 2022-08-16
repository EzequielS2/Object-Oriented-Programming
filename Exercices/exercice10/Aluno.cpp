#include <string>
using namespace std;
#include "Pessoa.h"
#include "Aluno.h"


Aluno::Aluno(int ma, float me, string n, string f)
:Pessoa(n, f) { //metodo construtor com repasse
 setMedia(me);
 setMatr(ma);
 }
 
 int Aluno::getMatr() { return matr; }
 float Aluno::getMedia() { return media; }
 void Aluno::setMatr(int ma) { matr = ma; }
 void Aluno::setMedia(float me) { media = me; }

//fim da implementação de Aluno.h
