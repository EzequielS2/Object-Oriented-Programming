#include<iostream>

#include<string>

using namespace std;

#include "Ex2.h"




int main()
{
	
	
	CDS cd1("You", "James Arthur", 2019);
		
	CDS cd2("Preach", "John Legend", 2020);
		
	CDS cd3("Waves", "Mr Probz", 2013);
		
	cout << "\n\n" << "Informações do CD 1" << "\n\n";

	cout << "Título: " << cd1.Titulo() << "\n\n";

	cout << "Artista: " << cd1.Artista() << "\n\n";
	
	cout << "Ano: " << cd1.Ano() << "\n\n";


	cout << "\n\n" << "Informações do CD 2" << "\n\n\n";

	cout << "Título: " << cd2.Titulo() << "\n\n";

	cout << "Artista: " << cd2.Artista() << "\n\n";
	
	cout << "Ano: " << cd2.Ano() << "\n\n";


    cout << "\n\n" << "Informações do CD 3" << "\n\n\n";

	cout << "Título: " << cd3.Titulo() << "\n\n";

	cout << "Artista: " << cd3.Artista() << "\n\n";
	
	cout << "Ano: " << cd3.Ano() << "\n\n";
	
	

	
	
		
}
