/*

Desenhar uma classe que represente uma fruta para um menu de
saladas de frutas. Utilize como atributos os dados que forem interessantes
para o usuário do cadastro. Escrever um programa em C++ para a classe,
incluindo atributos privados e os respectivos métodos getters & setters. No
método main(), criar três objetos da classe, atribuir valores aos atributos e
os imprimir.


*/








                //DESENHO


/*
     
      ///////////////////////////////////
      //          MenuFrutas          ///
      ///////////////////////////////////
      // + fruta: string               //
      // + cor: string                 //
      // + peso: float                 //
      ///////////////////////////////////////////
      // + geFruta(): string                   //
      // + geCor(): string                     //
      // + gePeso(): float                     //
      // + seFruta(NovaFruta: string): void    //
      // + seCor(NovaCor: string): void        //
      // + sePeso(NovoPeso: float): void       //
      ///////////////////////////////////////////




*/





#include<iostream>
#include<string>

using namespace std;

class MenuFrutas
{
	private:
	
	string fruta, cor;
	
	float peso;
	
	public:
	
	//getter

	string geFruta()
	{
		return fruta;
	}
	string geCor()
	{
		return cor;
	}
	
	float gePeso()
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
	
	void sePeso(float NovoPeso)
	{
		peso=NovoPeso;
	}
	
};


int main()
{
	MenuFrutas fr1, fr2, fr3;
	

	fr1.seFruta("MAÇÃ");

	fr1.seCor("VERMELHA");

	fr1.sePeso(130);


	fr2.seFruta("BANANA");

	fr2.seCor("AMARELO");

	fr2.sePeso(86);



	fr3.seFruta("LARANJA");

	fr3.seCor("LARANJA");

	fr3.sePeso(144);


	cout << "\n\n"<< "Dados da fruta 1" << "\n\n";
	
	cout << "Fruta: " <<fr1.geFruta();
	cout << "\n" <<"Cor: " << fr1.geCor();
	cout << "\n" <<"Peso: " << fr1.gePeso();

	

	cout << "\n\n"<< "Dados da fruta 2" << "\n\n";

	cout << "Fruta: " <<fr2.geFruta();
	cout << "\n" <<"Cor: " << fr2.geCor();
	cout << "\n" <<"Peso: " << fr2.gePeso();



	cout << "\n\n" << "Dados da fruta 3" << "\n\n";

	cout << "Fruta: " <<fr3.geFruta();
	cout << "\n" <<"Cor: " << fr3.geCor();
	cout << "\n" <<"Peso: " << fr3.gePeso();

}
