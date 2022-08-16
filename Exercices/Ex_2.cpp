/*

Desenhe o diagrama de classe e escreva o c�digo para uma classe
que representa um CD, com atributos t�tulo, artista e ano, com um m�todo
para mostrar os valores dos atributos do objeto. Na main, crie tr�s objetos da
classe CD, atribua valores para os atributos de cada objeto e mostre esses
valores utilizando o m�todo.

*/


/*


OBS (PARA AJUDAR).:

A fun��o std::getline() � capaz de ler o dado de entrada at� que uma nova linha seja 
detectada enquanto std::ignore() limpa o caracter de nova linha \n do buffer de entrada 
std::cin.

*/


//DESENHO

/*
     
      ///////////////////////////////////
      //             CDS              ///
      ///////////////////////////////////
      // + titulo: string              //
      // + artista: string             //
      // + ano: int                    //
      ///////////////////////////////////
      // + Titulo(): string            //
      // + Artista(): string           //
      // + Ano(): int                  //
      //                               //
      ///////////////////////////////////




*/


#include<iostream>

#include<string>

using namespace std;


class CDS
{
	public:
	
	string titulo, artista;

	int ano;
	
	public:
	
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



int main()
{
	CDS cd1, cd2, cd3;
	
	

	// Para o primeiro CD
	
	cd1.titulo= "O poeta e o vil�o";     //t�tulo
	
	cd1.artista= "Vinicius de Moraes";    // artista
	
	cd1.ano= 1975;                          // ano
	
	
	// Para o segundo CD
	
	cd2.titulo= "O Tempo N�o Para";    
	
	cd2.artista= "Cazuza";   
	
	cd2.ano= 1988;         
	
	
	// Para o terceiro CD
	
	cd3.titulo= "You";  
	
	cd3.artista= "James Arthur";   
	
	cd3.ano= 2019; 
	
	

	cout << "\n\n" << "Informa��es do CD 1" << "\n\n\n";

	cout << "T�tulo: " << cd1.Titulo() << "\n\n";

	cout << "Artista: " << cd1.Artista() << "\n\n";
	
	cout << "Ano: " << cd1.Ano() << "\n\n";


	cout << "\n\n" << "Informa��es do CD 2" << "\n\n\n";

	cout << "T�tulo: " << cd2.Titulo() << "\n\n";

	cout << "Artista: " << cd2.Artista() << "\n\n";
	
	cout << "Ano: " << cd2.Ano() << "\n\n";


        cout << "\n\n" << "Informa��es do CD 3" << "\n\n\n";

	cout << "T�tulo: " << cd3.Titulo() << "\n\n";

	cout << "Artista: " << cd3.Artista() << "\n\n";
	
	cout << "Ano: " << cd3.Ano() << "\n\n";

}






	
	
	





		
	

	

	
		
	
	
