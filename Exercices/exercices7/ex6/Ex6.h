#include<iostream>
#include<string>

using namespace std;

class MenuFrutas
{
	private:
	
	string fruta, cor;
	
	int peso;
	
	public:
			
	MenuFrutas(string Fruta, string Cor, int Peso){seFruta(Fruta); seCor(Cor); sePeso(Peso);}
	
	
	//getter

	string geFruta()
	{
		return fruta;
	}
	string geCor()
	{
		return cor;
	}
	
	int gePeso()
	{	
		return peso;	
	}
		

	//setter


	void seFruta(string NovaFruta)
	{
		fruta=NovaFruta;
	}
	
	void seCor(string NovaCor)
	{
		cor=NovaCor;
	}
	
	void sePeso(int NovoPeso)
	{
		peso=NovoPeso;
	}
	
};


