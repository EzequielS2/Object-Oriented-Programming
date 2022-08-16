#include<iostream>
#include<string>

using namespace std;

class carro
{
	private:
	
	string cor, marca, modelo;
	
	int ano;
	
	public:
		
		
	carro(string Cor, string Marca, string Modelo, int Ano){seCor(Cor); seMarca(Marca); seModelo(Modelo); seAno(Ano);}
	
	
	//getter

	string geCor()
	{
		return cor;
	}
	string geMarca()
	{
		return marca;
	}
	
	string geModelo()
	{
		return modelo;
	}
	
	int geAno()
	{	
		return ano;	
	}
		

	//setter


	void seCor(string NovaCor)
	{
		cor=NovaCor;
	}
	
	void seMarca(string NovaMarca)
	{
		marca=NovaMarca;
	}
	
	void seAno(int NovoAno)
	{
		ano=NovoAno;
	}
	
	void seModelo(string NovoModelo)
	{
		modelo=NovoModelo;
	}
};

