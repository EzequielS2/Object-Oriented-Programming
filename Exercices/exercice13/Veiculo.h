#include <string>
using namespace std;

class Veiculo
{
	private:
		string marca;
		int tanque;
		float consumo;

	public:
		
		Veiculo(string, int, float);
		
		string getMarca();
		int getTanque(); 
		float getConsumo();
		
		void setMarca(string );
		void setTanque(int ); 
		void setConsumo(float );

		float calcAutonomia();
		
}; //Fim da classe Veiculo
