#include<iostream>
#include<string>

using namespace std;

class pessoa
{
	private:
	
	string email, endereco;
	
	int telefone;
	
	public:
	
	
	
	pessoa(string Em, string End, int Te){seEmail(Em); seEndereco(End); seTel(Te);}
	
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


