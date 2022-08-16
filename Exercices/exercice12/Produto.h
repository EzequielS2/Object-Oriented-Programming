#include <string>
using namespace std;

class Produto
{
 private:
 	string nome;
	float preco;
	int cod;
 	
public:
Produto(int c, string n, float p); // Método construtor
 
	string getNome();
	
	float getPreco();
	
	int getCod();
	
	float CalcPrecoFinal();
	
	
	
	void setNome(string);
	
	void setPreco(float);
	
	void setCod(int);
	
};

