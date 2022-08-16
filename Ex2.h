#include<iostream>

#include<string>

using namespace std;


class CDS
{
	private:
	
	string titulo, artista;

	int ano;
	
	public:
		
	CDS(string t, string a, int an){setTi(t); setArt(a); setAno(an);}
		
	
		
		void setTi(string NovoTi){titulo=NovoTi;}
		
		void setArt(string NovoArt){artista=NovoArt;}
		
		void setAno(int NovoAno){ano=NovoAno;}
		
		
		
		
		string Titulo()
		{
			return titulo;
		}
	
		string Artista()
		{
			return artista;
		}
	
		int Ano()
		{
			return ano;
		}
};



