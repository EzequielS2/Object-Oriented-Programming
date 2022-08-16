#include <string>
using namespace std;



class Aluno: public Pessoa
{
 private:
	 int matr;
 	float media;
 public:
	Aluno(int, float, string, string); //metodo construtor com repasse
	void setMedia(float);
	float getMedia();
 	void setMatr(int);
	int getMatr();
};

