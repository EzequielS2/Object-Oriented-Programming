#include <string>
using namespace std;
#include "Pessoa.h"


Pessoa::Pessoa(string num, string fo) {
setNome(num);
setFone(fo);
}
string Pessoa::getNome() { return nome; }
string Pessoa::getFone() { return fone; }
void Pessoa::setNome(string n) { nome = n; }
void Pessoa::setFone(string f) { fone = f; }
//fim da implementação
