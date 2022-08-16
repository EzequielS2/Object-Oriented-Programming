#include <string>
using namespace std;

class Romance: public Livro
{
 private:
	 int codigo;
 	float preco;
 public:
	Romance(int, float, string, int); //metodo construtor com repasse
	void setCod(int);
	int getCod();
 	void setPr(float);
	float getPr();
};

