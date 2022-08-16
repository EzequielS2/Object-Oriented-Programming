#include<string>

using namespace std;

class Ficcao: public Livro
{
 private:
	 int codi;
 	float prec;
 	
 public:
	Ficcao(int, float, string, int); //metodo construtor com repasse
	void setC(int);
	int getC();
 	void setP(float);
	float getP();
};

			
			

