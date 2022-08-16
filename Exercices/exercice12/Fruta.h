#include <string>
using namespace std;

class Fruta: public Produto
{
 private:
	 int duracao;
 	float peso;
 public:
	Fruta(int, float, int, string, float); //metodo construtor com repasse
	void setPeso(float);
	int getDuracao();
 	void setDuracao(int);
	float getPeso();
};

