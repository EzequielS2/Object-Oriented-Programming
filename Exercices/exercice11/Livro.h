#include <string>
using namespace std;

class Livro
{
 private:
 	string nome;
 	int quantidade;
 	
public:
 Livro(string, int); //metodo construtor
 
 void setNome(string);
 
 string getNome();

 void setQuant(int);
 
 int getQuant();
};

