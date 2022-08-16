#include<string>



using namespace std;


class Caneta
{
	private:
	
	string cor, tipo;
	float peso;
	
	public:
			
	Caneta(string c, string t, float p); // Método construtor
	
	string geCor();
	
	string geTipo();
	
	float gePeso();
	
	void seCor(string);
	
	void seTipo(string);
	
	void sePeso(float);
		
	
};



