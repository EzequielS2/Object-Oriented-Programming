

/*

Completar o exemplo acima incluindo os arquivos da classe Professor. No
main(), acrescentar um o.jeto “professor” passando valores quaisquer para
seus atri.utos através do método construtor e em seguida imprimir os dois
o.jetos






*/










#include <iostream>
#include <string>

using namespace std;

#include "Pessoa.h"
#include "Aluno.h"
#include "Professor.h"

int main()
{

 Professor professor(3250, 123456, "Carlos Silva", "(15) 9999-1111");
 Aluno aluno(12345, 8.5, "maria", "(24) 9999-9999");
 
 cout << "\n\nProfessor:"
 << "\nSiape: " << professor.getSi()
 << "\nNome: " << professor.getNome()
 << "\nSalário: " << professor.getSal()
 << "\nFone: " << professor.getFone()
 << endl;
 
 
 
 cout << "\n\nAluno:"
 << "\nMatricula: " << aluno.getMatr()
 << "\nNome: " << aluno.getNome()
 << "\nMedia: " << aluno.getMedia()
 << "\nFone: " << aluno.getFone()
 << endl;
 
 
}
