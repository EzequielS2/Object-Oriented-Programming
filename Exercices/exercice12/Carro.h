#include<string>

using namespace std;

class Carro: public Produto
{
 private:
	
 	float tanque;
 	
 	int portas;
 	
 public:
	Carro(int, float, int, string, float); //metodo construtor com repasse
	void setTanque(float);
	int getPortas();
 	void setPortas(int);
	float getTanque();
};

			
			

