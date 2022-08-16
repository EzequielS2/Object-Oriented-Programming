/*

Desenhar uma classe que represente um veículo da sua escolha
(um carro, uma moto ou outro) para um cadastro de veículos. Utilize
como atributos os dados que forem interessantes para o usuário do
cadastro. Escrever um programa em C++ para a classe, incluindo atri.utos
privados e os respectivos métodos getters & setters. No método main(),
criar três objetos da classe, atribuir valores aos atributos e os imprimir.


*/





                 //DESENHO


/*
     
      ///////////////////////////////////
      //             carro            ///
      ///////////////////////////////////
      // + cor: string                 //
      // + marca: string               //
      // + modelo: string              //
      // + ano: int                    //
      ///////////////////////////////////////////////////
      // + geCor(): string                             //
      // + geMarca(): string                           //
      // + geModelo(): string                          //
      // + geAno(): int                                //
      // + seCor(NovaCor: string ): void               //
      // + seMarca(NovaMarca: string): void            //
      // + seModelo(NovoModelo: string): void          //
      // + seAno(NovoAno: int): void                   //
      ///////////////////////////////////////////////////




*/











#include<iostream>
#include<string>

using namespace std;

class carro
{
	private:
	
	string cor, marca, modelo;
	
	int ano;
	
	public:
	
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


int main()
{
	carro us1, us2, us3;
	

	us1.seMarca("CHEVROLET");

	us1.seModelo("CAMARO");

	us1.seCor("Preto");

	us1.seAno(2017);


	us2.seMarca("RENAULT");

	us2.seModelo("SANDERO");

	us2.seCor("Prata");

	us2.seAno(2019);



	us3.seMarca("Citroën");

	us3.seModelo("C4 PALLAS");

	us3.seCor("Vermelho");

	us3.seAno(2010);


	cout << "\n\n"<< "Dados do user 1" << "\n\n";
	
	cout << "Marca: " <<us1.geMarca();
	cout << "\n" <<"Modelo: " << us1.geModelo();
	cout << "\n" <<"Cor: " << us1.geCor();
	cout << "\n" <<"Ano: " << us1.geAno();

	

	cout << "\n\n"<< "Dados do user 2" << "\n\n";

	cout << "Marca: " <<us2.geMarca();
	cout << "\n" <<"Modelo: " << us2.geModelo();
	cout << "\n" <<"Cor: " << us2.geCor();
	cout << "\n" <<"Ano: " << us2.geAno();


	cout << "\n\n" << "Dados do user 3" << "\n\n";

	cout << "Marca: " <<us3.geMarca();
	cout << "\n" <<"Modelo: " << us3.geModelo();
	cout << "\n" <<"Cor: " << us3.geCor();
	cout << "\n" <<"Ano: " << us3.geAno();
}
