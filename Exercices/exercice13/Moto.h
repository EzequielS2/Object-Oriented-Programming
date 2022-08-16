#include <string>
using namespace std;

class Moto: public Veiculo //Moto herda veiculo
{
	private:
		int TemposMotor;
	
	public:
		
		Moto(string, int, float, int);
		
		int getTemposMotor(); 
		void setTemposMotor(int );
};
