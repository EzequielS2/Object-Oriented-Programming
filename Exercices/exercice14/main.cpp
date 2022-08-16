#include <iostream>

using namespace std;

#include "Produto.h"
#include "Presunto.h"
#include "Queijo.h"
#include "Roupa.h"
#include "Carro.h"
#include "Fruta.h"

int main()
{
	
	{ //bloco limitador 1

		Roupa r1 ("Nike", 123, "Camisa", 199.99);
		cout << "\n\nProduto: "

		<< "Código: " << r1.getCod() << " - "
		<< "Marca: " <<r1.getMarca()  << " - "
		<< "Nome: " << r1.getNome() << " - R$ "
		<< "Preço: "<<r1.getPreco()
		<< endl;

	}
	
	
	
	{ //bloco limitador 2

		Carro c1 ("Chevrolet", 113, "Camaro", 381700);
		cout << "\n\nProduto: "

		<< "Código: "<<c1.getCod() << " - "
		<< "Marca: "<<c1.getMarca()  << " - "
		<< "Nome: "<<c1.getNome() << " - R$ "
		<< "Preço: "<<c1.getPreco()
		<< endl;

	}
	
	
	{ //bloco limitador 3

		Fruta f1 ("Amarela", 145, "Banana", 2.99);
		cout << "\n\nProduto: "

		<< "Código: "<<f1.getCod() << " - "
		<< "Cor: "<<f1.getCor()  << " - "
		<< "Nome: "<<f1.getNome() << " - R$ "
		<< "Preço: "<<f1.getPreco()
		<< endl;

	}
	
	
	{ //bloco limitador 4
		Queijo q1 (0.5);

		Presunto pr1 ("Especial", 103, "Sem Gordura", 9.5);

		pr1.setPeso( pr1.calcPeso( q1 ));
		cout << "\n\nProduto: "

		<< "Código: "<<pr1.getCod() << " - "
		<< "Marca: "<<pr1.getMarca() << " - "
		<< "Nome: "<<pr1.getNome() << " - "
		<< "Peso: "<<pr1.getPeso() << " Kg - R$ "
		<< "Preço final: "<<calcPrecoFinal(pr1)
		<< endl;

	}
	
	
	
	
	
	
	
}
