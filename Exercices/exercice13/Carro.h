#include<string>

using namespace std;

class Carro: public Veiculo //Carro herda veiculo
{
	private:
		int portas;
	
	public:
		
		Carro(string, int, float, int);
		
		int getPortas(); 
		void setPortas(int );
};


			
			

