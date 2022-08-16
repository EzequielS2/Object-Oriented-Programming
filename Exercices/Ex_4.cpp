/*

Desenhar uma classe que represente uma pessoa para uma
agenda de e-mails, fones e outros dados que forem interessantes para o
usuário. Escrever um programa em C++ para a classe, incluindo atributos
privados e os respectivos métodos getters & setters. No método main(),
criar três objetos da classe, atribuir valores aos atributos e os imprimir.



*/


             //DESENHO


/*
     
      ///////////////////////////////////
      //             pessoa           ///
      ///////////////////////////////////
      // + email: string               //
      // + endereco: string            //
      // + telefone: int               //
      /////////////////////////////////////////////////////
      // + geEmail(): string                             //
      // + geEnd(): string                               //
      // + geTel(): int                                  //
      // + seEmail(NovoEmail : string): void             //
      // + seEndereco(NovoEndereco: string): void        //
      // + seTel(NovoTel: int): void                     //
      /////////////////////////////////////////////////////




*/








#include<iostream>
#include<string>

using namespace std;

class pessoa
{
	private:
	
	string email, endereco;
	
	int telefone;
	
	public:
	
	//getter

	string geEmail()
	{
		return email;
	}
	string geEnd()
	{
		return endereco;
	}
	
	int geTel()
	{	
		return telefone;	
	}
		

	//setter


	void seEmail(string NovoEmail)
	{
		email=NovoEmail;
	}
	
	void seEndereco(string NovoEndereco)
	{
		endereco=NovoEndereco;
	}
	
	void seTel(int NovoTel)
	{
		telefone=NovoTel;
	}
};


int main()
{
	pessoa pe1, pe2, pe3;
	

	pe1.seEmail("anderson@kmail.com");

	pe1.seEndereco("Rua 73, São Paulo");

	pe1.seTel(997001100);


	pe2.seEmail("carla@kmail.com");

	pe2.seEndereco("Avenida Rio Branco 10, Rio de Janeiro");

	pe2.seTel(997110011);


	pe3.seEmail("ana@kmail.com");

	pe3.seEndereco("Rua 73, Volta Redonda");

	pe3.seTel(997120012);

	cout << "\n\n"<< "Dados da primeira pessoa" << "\n\n";
	
	cout << "Email: " <<pe1.geEmail();
	cout << "\n" <<"Endereço: " << pe1.geEnd();
	cout << "\n" <<"Telefone: " << pe1.geTel();

	

	cout << "\n\n"<< "Dados da segunda pessoa" << "\n\n";

	cout << "Email: " << pe2.geEmail();
	cout << "\n" <<"Endereço: " << pe2.geEnd();
	cout << "\n" <<"Telefone: " << pe2.geTel();

	cout << "\n\n" << "Dados da terceira pessoa" << "\n\n";

	cout << "Email: " << pe3.geEmail();
	cout << "\n" <<"Endereço: " << pe3.geEnd();
	cout << "\n" <<"Telefone: " << pe3.geTel();
}
